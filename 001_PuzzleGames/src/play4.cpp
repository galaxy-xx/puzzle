#include "play4.h"
#include <QApplication>
#include <QDialog>
#include <QFileDialog> //文件
#include <QImage>
#include <QLabel>      //标签
#include <QMessageBox> //信息框
#include <QMouseEvent> //鼠标点击事件
#include <QRandomGenerator>
#include <QStringList>
#include <QTime>
#include <QTimer>
#include "ui_play4.h"
#include <cstdlib>
#include <ctime>
#include <windows.h> //sleep
int b[100];
int ss = 0;
const int g_iRank4 = 4; //尺寸设置
extern int save;
extern int xx;
play4::play4(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::play4)
    , _bStart(false)
    , _iStep(0)
{
    time.setHMS(0, 0, 0, 0);  //设置初始值
    timer = new QTimer(this); //创建一个定时器
    // 定义一个图片路径列表
    QStringList imagePaths = {
        ":photo/img/1.jpg",
        ":photo/img/2.jpg",
        ":photo/img/3.jpg",
        ":photo/img/4.jpg",
        ":photo/img/5.jpg",
        ":photo/img/6.jpeg",
        ":photo/img/7.jpg",
        ":photo/img/8.jpg",
    };
    if (save == 1) {
        // 生成一个随机索引
        int randomIndex = QRandomGenerator::global()->bounded(imagePaths.size());
        xx = randomIndex;
        _strPos = imagePaths[randomIndex];
    } else {
        _strPos = "W://img/1.png";
    }

    ui->setupUi(this);

    init();

    connect(this, SIGNAL(sig_restart()), this, SLOT(on_btnRestart_clicked()));
    connect(this, SIGNAL(sig_back()), this, SLOT(on_btnBack_clicked()));
    connect(this, SIGNAL(sig_return()), this, SLOT(on_btnreturn_clicked()));
}

play4::~play4() //删除了ui指针所指向的Ui::dlgMenu对象
{
    delete ui;
}

//开始游戏
void play4::start()
{
    time.setHMS(0, 0, 0, 0);  //设置初始值
    timer = new QTimer(this); //创建一个定时器
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    _bStart = 1; //标记为开始游戏
    _iStep = 0;
    ui->lcdStep->display("0");
    play4::upset();       //打乱
    play4::showpicture(); //显示图案
}
void play4::update()
{
    static quint32 time_out = 0;
    time_out++;
    time = time.addSecs(1);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
}

void play4::mousePressEvent(QMouseEvent *event)
{
    //鼠标点击事件
    // 如果是鼠标左键按下
    if (event->button() == Qt::LeftButton) {
        if (ss == 0) {
            timer->start(1000);
            ss++;
        }
        if (!_bStart) {
            QMessageBox::information(NULL, "提示", "请先点击开始游戏按钮");
            return;
        }
        //记录鼠标所在的几何位置，将全局鼠标位置转换为当前窗口的坐标系统下的位置，然后通过contains方法判断这个位置是否在标签的几何区域内。
        if (ui->label_1->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //0 0
            move(0, 0, b); //本质上移动空白的位置，使之到0，0

        } else if (ui->label_2->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //1 0
            move(1, 0, b);

        } else if (ui->label_3->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //2 0
            move(2, 0, b);

        } else if (ui->label_4->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //0 1
            move(0, 1, b);

        } else if (ui->label_5->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 1 1
            move(1, 1, b);

        } else if (ui->label_6->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 1
            move(2, 1, b);

        } else if (ui->label_7->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 0 2
            move(0, 2, b);

        } else if (ui->label_8->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 1 2
            move(1, 2, b);

        } else if (ui->label_9->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(2, 2, b);
        }

        showpicture();
        ui->lcdStep->display(QString::number(_iStep));

        if (bSuccessful()) {
            QApplication::setQuitOnLastWindowClosed(
                false); //设置了应用程序在最后一个窗口关闭时不自动退出
            QMessageBox::StandardButton result = QMessageBox::information(NULL,
                                                                          "游戏胜利！ ",
                                                                          "继续游戏？",
                                                                          QMessageBox::Yes
                                                                              | QMessageBox::No);
            if (result == QMessageBox::Yes) {
                emit sig_restart();

            } else {
                emit sig_back();
            }
        }
    }
}

//初始化
void play4::init()
{
    //初始化拼图
    int num = 1;
    for (int i = 0; i < g_iRank4; i++) {
        for (int j = 0; j < g_iRank4; j++) {
            _iarrMap[i][j] = num; //map中标记为数字
            num++;
        }
    }

    _iarrMap[3][3] = 0;
    _iarrBlankCoord[0] = 3, _iarrBlankCoord[1] = 3; //空白部分坐标

    // 插入空白图片
    QPixmap *pixBlank = new QPixmap(":/img/blank.png");
    pixBlank->scaled(ui->time_labl->size(), Qt::KeepAspectRatio);
    _img0 = pixBlank->copy(0, 0, pixBlank->width(), pixBlank->height());

    //ui->label_12->setScaledContents(true);
    QPixmap *pixmap1 = new QPixmap(_strPos);
    // pixmap1->scaled(ui->labPic->size()*2, Qt::KeepAspectRatio);

    //切割图片//从pixmap1的左上角（坐标为 (0, 0)）开始，复制一个宽度为pixmap1宽度的四分之一，高度为pixmap1高度的四分之一的区域，并将其存储在_img1中
    _img1 = pixmap1->copy(0, 0, pixmap1->width() / 4, pixmap1->height() / 4);
    _img2 = pixmap1->copy(pixmap1->width() / 4, 0, pixmap1->width() / 4, pixmap1->height() / 4);
    _img3 = pixmap1->copy(pixmap1->width() / 4 * 2, 0, pixmap1->width() / 4, pixmap1->height() / 4);
    _img4 = pixmap1->copy(pixmap1->width() / 4 * 3, 0, pixmap1->width() / 4, pixmap1->height() / 4);
    _img5 = pixmap1->copy(0, pixmap1->height() / 4, pixmap1->width() / 4, pixmap1->height() / 4);
    _img6 = pixmap1->copy(pixmap1->width() / 4,
                          pixmap1->height() / 4,
                          pixmap1->width() / 4,
                          pixmap1->height() / 4);
    _img7 = pixmap1->copy(pixmap1->width() / 4 * 2,
                          pixmap1->height() / 4,
                          pixmap1->width() / 4,
                          pixmap1->height() / 4);
    _img8 = pixmap1->copy(pixmap1->width() / 4 * 3,
                          pixmap1->height() / 4,
                          pixmap1->width() / 4,
                          pixmap1->height() / 4);
    _img9 = pixmap1->copy(0, pixmap1->height() / 4 * 2, pixmap1->width() / 4, pixmap1->height() / 4);
    _img10 = pixmap1->copy(pixmap1->width() / 4,
                           pixmap1->height() / 4 * 2,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);
    _img11 = pixmap1->copy(pixmap1->width() / 4 * 2,
                           pixmap1->height() / 4 * 2,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);
    _img12 = pixmap1->copy(pixmap1->width() / 4 * 3,
                           pixmap1->height() / 4 * 2,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);
    _img13 = pixmap1->copy(0,
                           pixmap1->height() / 4 * 3,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);
    _img14 = pixmap1->copy(pixmap1->width() / 4,
                           pixmap1->height() / 4 * 3,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);
    _img15 = pixmap1->copy(pixmap1->width() / 4 * 2,
                           pixmap1->height() / 4 * 3,
                           pixmap1->width() / 4,
                           pixmap1->height() / 4);

    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_6->setScaledContents(true);
    ui->label_7->setScaledContents(true);
    ui->label_8->setScaledContents(true);
    ui->label_9->setScaledContents(true);
    ui->label_10->setScaledContents(true);
    ui->label_11->setScaledContents(true);
    ui->label_12->setScaledContents(true);
    ui->label_13->setScaledContents(true);
    ui->label_14->setScaledContents(true);
    ui->label_15->setScaledContents(true);
    ui->label_16->setScaledContents(true);

    ui->label_1->setText("1");
    ui->label_2->setText("2");
    ui->label_3->setText("3");
    ui->label_4->setText("4");
    ui->label_5->setText("5");
    ui->label_6->setText("6");
    ui->label_7->setText("7");
    ui->label_8->setText("8");
    ui->label_9->setText("9");
    ui->label_10->setText("10");
    ui->label_11->setText("11");
    ui->label_12->setText("12");
    ui->label_13->setText("13");
    ui->label_14->setText("14");
    ui->label_15->setText("15");
    ui->label_16->setText("16");

    ui->label_1->setPixmap(_img1);
    ui->label_2->setPixmap(_img2);
    ui->label_3->setPixmap(_img3);
    ui->label_4->setPixmap(_img4);
    ui->label_5->setPixmap(_img5);
    ui->label_6->setPixmap(_img6);
    ui->label_7->setPixmap(_img7);
    ui->label_8->setPixmap(_img8);
    ui->label_9->setPixmap(_img9);
    ui->label_10->setPixmap(_img10);
    ui->label_11->setPixmap(_img11);
    ui->label_12->setPixmap(_img12);
    ui->label_13->setPixmap(_img13);
    ui->label_14->setPixmap(_img14);
    ui->label_15->setPixmap(_img15);
    ui->label_16->setPixmap(_img0);
}

void play4::move(int x, int y, int a[])
{
    int &ix = _iarrBlankCoord[0];
    int &iy = _iarrBlankCoord[1]; //引用
    b[0] = _iarrBlankCoord[0];
    b[1] = _iarrBlankCoord[1];
    if (ix == x) //x坐标相同时
    {
        if (qAbs(iy - y) == 1) //判断垂直方向上相邻
        {
            qSwap(_iarrMap[iy][ix],
                  _iarrMap[y][x]); //qswap交换了二维数组_iarrMap中坐标为(iy, ix)和(y, x)的两个元素的值
            ix = x;
            iy = y;
            _iStep++;
        }
    } else if (iy == y) //y坐标相同时
    {
        if (qAbs(ix - x) == 1) //判断水平结构上相同
        {
            qSwap(_iarrMap[iy][ix], _iarrMap[y][x]);
            ix = x;
            iy = y;
            _iStep++;
        }
    }
}

void play4::move_f(int i)
{
    int &x = _iarrBlankCoord[0];
    int &y = _iarrBlankCoord[1];

    if (i == 1) { //上(0在下，和上面的换)
        if (y != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y - 1][x]);
            y--;
        }

    } else if (i == 2) { //下（0在上，和下面的换）
        if (y != g_iRank4 - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y + 1][x]);
            y++;
        }

    } else if (i == 3) { //左
        if (x != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x - 1]);
            x--;
        }
    } else if (i == 4) { //右
        if (x != g_iRank4 - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x + 1]);
            x++;
        }
    }
}

void play4::upset()
{
    //打乱300次
    for (int i = 0; i < 300; i++) {
        //Sleep(1000);
        move_f(rand() % 4 + 1); //生成随机数
    }
}

void play4::showpicture()
{
    //QString tmp_label = QString("QLabel_%1").arg(k);
    //QString tmp_img = QString("img%1").arg(k);
    //QLabel *p = QLabel::findChild("label_3");
    //QLabel* p =  QWidget::findChild<QLabel*>("QLabel_3");
    //QPixmap *imgd = QWidget::findChild<QPixmap*>("img6");

    int k = 1;

    for (int j = 0; j < g_iRank4; j++) {
        for (int i = 0; i < g_iRank4; i++) {
            QString tmp_label = QString("label_%1").arg(k);
            //tmp_img = QString("img%1").arg(map[j][i]);
            //根据控件名得到控件指针
            QLabel *p = QWidget::findChild<QLabel *>(tmp_label);

            if (_iarrMap[j][i] == 0) {
                p->setPixmap(_img0);
            } else if (_iarrMap[j][i] == 1) {
                p->setPixmap(_img1);
            } else if (_iarrMap[j][i] == 2) {
                p->setPixmap(_img2);
            } else if (_iarrMap[j][i] == 3) {
                p->setPixmap(_img3);
            } else if (_iarrMap[j][i] == 4) {
                p->setPixmap(_img4);
            } else if (_iarrMap[j][i] == 5) {
                p->setPixmap(_img5);
            } else if (_iarrMap[j][i] == 6) {
                p->setPixmap(_img6);
            } else if (_iarrMap[j][i] == 7) {
                p->setPixmap(_img7);
            } else if (_iarrMap[j][i] == 8) {
                p->setPixmap(_img8);
            } else if (_iarrMap[j][i] == 9) {
                p->setPixmap(_img9);
            } else if (_iarrMap[j][i] == 10) {
                p->setPixmap(_img10);
            } else if (_iarrMap[j][i] == 11) {
                p->setPixmap(_img11);
            } else if (_iarrMap[j][i] == 12) {
                p->setPixmap(_img12);
            } else if (_iarrMap[j][i] == 13) {
                p->setPixmap(_img13);
            } else if (_iarrMap[j][i] == 14) {
                p->setPixmap(_img14);
            } else if (_iarrMap[j][i] == 15) {
                p->setPixmap(_img15);
            }

            k++;
        }
    }
}

bool play4::bSuccessful()
{
    int num = 1;

    for (int j = 0; j < g_iRank4; j++) {
        for (int i = 0; i < g_iRank4; i++) {
            if (g_iRank4 - 1 == i && g_iRank4 - 1 == j)
                break; //当遍历到二维数组的最后一个元素时，跳出循环。

            if (_iarrMap[j][i] != num) //检查当前位置的数组元素是否与一个计数器num的值相等
                return false;
            num++;
        }
    }

    return _iarrMap[g_iRank4 - 1][g_iRank4 - 1] == 0;
}

void play4::on_btnBack_clicked()
{
    this->hide();
    this->parentWidget()->show();
}

void play4::on_btnRestart_clicked()
{
    //    init();
    //    this->show();
    timer->stop();
    time.setHMS(0, 0, 0, 0);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    start();
    ss = 0;
}
void play4::on_btnreturn_clicked()
{
    _iStep = _iStep - 2;
    move(b[0], b[1], b);
    showpicture();
    ui->lcdStep->display(QString::number(_iStep));
}
void play4::on_pushButton_3_clicked()
{
    help *configWindow = new help;

    configWindow->show();
}
