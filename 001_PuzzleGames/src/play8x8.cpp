#include "play8x8.h"
#include "ui_play8x8.h"
#include <QApplication>
#include <QDialog>
#include <QFileDialog> //文件
#include <QLabel>      //标签
#include <QMessageBox> //信息框
#include <QMouseEvent> //鼠标点击事件
#include <QRandomGenerator>
#include <QStringList>
#include <QTime>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include <windows.h> //sleep
int c[100];
int sss = 0;
const int pg_iRank8 = 8; //尺寸设置
extern int save;
extern int xx;
extern int state;
play8x8::play8x8(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::play8x8)
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

play8x8::~play8x8()
{
    delete ui;
}
void play8x8::start()
{
    time.setHMS(0, 0, 0, 0);  //设置初始值
    timer = new QTimer(this); //创建一个定时器
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    _bStart = 1; //标记为开始游戏
    _iStep = 0;
    ui->lcdStep->display("0");
    play8x8::upset();       //打乱
    play8x8::showpicture(); //显示图案
}
void play8x8::update()
{
    static quint32 time_out = 0;
    time_out++;
    time = time.addSecs(1);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
}

void play8x8::mousePressEvent(QMouseEvent *event)
{
    //鼠标点击事件
    // 如果是鼠标左键按下
    if (event->button() == Qt::LeftButton) {
        if (sss == 0) {
            timer->start(1000);
            sss++;
        }
        if (!_bStart) {
            QMessageBox::information(NULL, "提示", "请先点击开始游戏按钮");
            return;
        }
        if (ui->label_01->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //0 0
            move(0, 0, c); //本质上移动空白的位置，使之到0，0

        } else if (ui->label_02->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //1 0
            move(1, 0,  c);

        } else if (ui->label_03->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //2 0
            move(2, 0, c);

        } else if (ui->label_04->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            //0 1
            move(3,0, c);

        } else if (ui->label_05->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 1 1
            move(4, 0, c);

        } else if (ui->label_06->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 1
            move(5, 0,c);

        } else if (ui->label_07->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 0 2
            move(6, 0, c);

        } else if (ui->label_08->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 1 2
            move(7, 0, c);

        } else if (ui->label_09->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(0, 1, c);
        }
        else if (ui->label_010->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(1, 1, c);
        }
        else if (ui->label_011->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(2, 1, c);
        }
        else if (ui->label_012->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(3, 1, c);
        }
        else if (ui->label_013->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(4,1, c);
        }
        else if (ui->label_014->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(5, 1, c);
        }
        else if (ui->label_015->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 2
            move(6,1, c);
        }
        else if (ui->label_016->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            // 2 20
            move(7, 1, c);
        }

        else if (ui->label_017->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 2, c);
        }
        else if (ui->label_018->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 2, c);
        }
        else if (ui->label_019->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 2, c);
        }
        else if (ui->label_020->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 2, c);
        }
        else if (ui->label_021->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 2, c);
        }
        else if (ui->label_022->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 2, c);
        }
        else if (ui->label_023->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 2, c);
        }
        else if (ui->label_024->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 2, c);
        }
        else if (ui->label_025->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 3, c);
        }
        else if (ui->label_026->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 3, c);
        }
        else if (ui->label_027->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 3, c);
        }
        else if (ui->label_028->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 3, c);
        }
        else if (ui->label_029->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 3, c);
        }
        else if (ui->label_030->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 3, c);
        }
        else if (ui->label_031->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 3, c);
        }
        else if (ui->label_032->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 3, c);
        }
        else if (ui->label_033->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 4, c);
        }
        else if (ui->label_034->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 4, c);
        }
        else if (ui->label_035->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 4, c);
        }
        else if (ui->label_036->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 4, c);
        }
        else if (ui->label_037->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 4, c);
        }
        else if (ui->label_038->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 4, c);
        }
        else if (ui->label_039->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 4, c);
        }
        else if (ui->label_040->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 4, c);
        }
        else if (ui->label_041->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 5, c);
        }
        else if (ui->label_042->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 5, c);
        }
        else if (ui->label_043->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 5, c);
        }
        else if (ui->label_044->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 5, c);
        }
        else if (ui->label_045->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 5, c);
        }
        else if (ui->label_046->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 5, c);
        }
        else if (ui->label_047->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 5, c);
        }
        else if (ui->label_048->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 5, c);
        }
        else if (ui->label_049->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 6, c);
        }
        else if (ui->label_050->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 6, c);
        }
        else if (ui->label_051->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 6, c);
        }
        else if (ui->label_052->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 6, c);
        }
        else if (ui->label_053->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 6, c);
        }
        else if (ui->label_054->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 6, c);
        }
        else if (ui->label_055->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 6, c);
        }
        else if (ui->label_056->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 6, c);
        }
        else if (ui->label_057->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(0, 7, c);
        }
        else if (ui->label_058->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(1, 7, c);
        }
        else if (ui->label_059->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(2, 7, c);
        }
        else if (ui->label_060->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(3, 7, c);
        }
        else if (ui->label_061->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(4, 7, c);
        }
        else if (ui->label_062->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(5, 7, c);
        }
        else if (ui->label_063->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(6, 7, c);
        }
        else if (ui->label_064->geometry().contains(this->mapFromGlobal(QCursor::pos()))) {
            move(7, 7, c);
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
void play8x8::init()
{
    //初始化拼图
    int num = 1;
    for (int i = 0; i < pg_iRank8; i++) {
        for (int j = 0; j < pg_iRank8; j++) {
            _iarrMap[i][j] = num; //map中标记为数字
            num++;
        }
    }

    _iarrMap[7][7] = 0;
    _iarrBlankCoord[0] = 7, _iarrBlankCoord[1] = 7; //空白部分坐标

    // 插入空白图片
    QPixmap *pixBlank = new QPixmap(":/img/blank.png");
    pixBlank->scaled(ui->time_labl->size(), Qt::KeepAspectRatio);
    _img0 = pixBlank->copy(0, 0, pixBlank->width(), pixBlank->height());

    //ui->label_12->setScaledContents(true);
    QPixmap *pixmap1 = new QPixmap(_strPos);
    // pixmap1->scaled(ui->labPic->size()*2, Qt::KeepAspectRatio);
    // 切割并存储图像块
     _img1 = pixmap1->copy(0, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img2 = pixmap1->copy(pixmap1->width() / 8, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img3 = pixmap1->copy(pixmap1->width() / 8 * 2, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img4 = pixmap1->copy(pixmap1->width() / 8 * 3, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img5 = pixmap1->copy(pixmap1->width() / 8 * 4, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img6 = pixmap1->copy(pixmap1->width() / 8 * 5, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img7 = pixmap1->copy(pixmap1->width() / 8 * 6, 0, pixmap1->width() / 8, pixmap1->height() / 8);
     _img8 = pixmap1->copy(pixmap1->width() / 8 * 7, 0, pixmap1->width() / 8, pixmap1->height() / 8);

     _img9 = pixmap1->copy(0, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img10 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img11 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img12 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img13 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img14 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img15 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);
     _img16 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8, pixmap1->width() / 8, pixmap1->height() / 8);

     _img17 = pixmap1->copy(0, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img18 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img19 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img20 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img21 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img22 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img23 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);
     _img24 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8 * 2, pixmap1->width() / 8, pixmap1->height() / 8);

     _img25 = pixmap1->copy(0, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img26 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img27 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img28 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img29 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img30 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img31 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);
     _img32 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8 * 3, pixmap1->width() / 8, pixmap1->height() / 8);

     _img33 = pixmap1->copy(0, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img34 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img35 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img36 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img37 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img38 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img39 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);
     _img40 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8 * 4, pixmap1->width() / 8, pixmap1->height() / 8);

     _img41 = pixmap1->copy(0, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img42 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img43 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img44 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img45 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img46 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img47 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);
     _img48 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8 * 5, pixmap1->width() / 8, pixmap1->height() / 8);

     _img49 = pixmap1->copy(0, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img50 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img51 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img52 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img53 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img54 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img55 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);
     _img56 = pixmap1->copy(pixmap1->width() / 8 * 7, pixmap1->height() / 8 * 6, pixmap1->width() / 8, pixmap1->height() / 8);

     _img57 = pixmap1->copy(0, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img58 = pixmap1->copy(pixmap1->width() / 8, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img59 = pixmap1->copy(pixmap1->width() / 8 * 2, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img60 = pixmap1->copy(pixmap1->width() / 8 * 3, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img61 = pixmap1->copy(pixmap1->width() / 8 * 4, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img62 = pixmap1->copy(pixmap1->width() / 8 * 5, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);
     _img63 = pixmap1->copy(pixmap1->width() / 8 * 6, pixmap1->height() / 8 * 7, pixmap1->width() / 8, pixmap1->height() / 8);

    ui->label_01->setScaledContents(true);
     for (int i = 2; i <= 64; i++) {
         QString labelName = QString("label_0%1").arg(i);
         QLabel* label = findChild<QLabel*>(labelName);
         if (label) {
             label->setScaledContents(true);
         }
     }
     for (int i = 1; i <= 64; i++) {
         QString labelName = QString("label_0%1").arg(i);
         QLabel* label = findChild<QLabel*>(labelName);
         if (label) {
             label->setText(QString::number(i));
         }
     }
     ui->label_01->setPixmap(_img1);
     ui->label_02->setPixmap(_img2);
     ui->label_03->setPixmap(_img3);
     ui->label_04->setPixmap(_img4);
     ui->label_05->setPixmap(_img5);
     ui->label_06->setPixmap(_img6);
     ui->label_07->setPixmap(_img7);
     ui->label_08->setPixmap(_img8);
     ui->label_09->setPixmap(_img9);
     ui->label_010->setPixmap(_img10);
     ui->label_011->setPixmap(_img11);
     ui->label_012->setPixmap(_img12);
     ui->label_013->setPixmap(_img13);
     ui->label_014->setPixmap(_img14);
     ui->label_015->setPixmap(_img15);
     ui->label_016->setPixmap(_img0);
     ui->label_017->setPixmap(_img17);
     ui->label_018->setPixmap(_img18);
     ui->label_019->setPixmap(_img19);
     ui->label_020->setPixmap(_img20);
     ui->label_021->setPixmap(_img21);
     ui->label_022->setPixmap(_img22);
     ui->label_023->setPixmap(_img23);
     ui->label_024->setPixmap(_img24);
     ui->label_025->setPixmap(_img25);
     ui->label_026->setPixmap(_img26);
     ui->label_027->setPixmap(_img27);
     ui->label_028->setPixmap(_img28);
     ui->label_029->setPixmap(_img29);
     ui->label_030->setPixmap(_img30);
     ui->label_031->setPixmap(_img31);
     ui->label_032->setPixmap(_img32);
     ui->label_033->setPixmap(_img33);
     ui->label_034->setPixmap(_img34);
     ui->label_035->setPixmap(_img35);
     ui->label_036->setPixmap(_img36);
     ui->label_037->setPixmap(_img37);
     ui->label_038->setPixmap(_img38);
     ui->label_039->setPixmap(_img39);
     ui->label_040->setPixmap(_img40);
     ui->label_041->setPixmap(_img41);
     ui->label_042->setPixmap(_img42);
     ui->label_043->setPixmap(_img43);
     ui->label_044->setPixmap(_img44);
     ui->label_045->setPixmap(_img45);
     ui->label_046->setPixmap(_img46);
     ui->label_047->setPixmap(_img47);
     ui->label_048->setPixmap(_img48);
     ui->label_049->setPixmap(_img49);
     ui->label_050->setPixmap(_img50);
     ui->label_051->setPixmap(_img51);
     ui->label_052->setPixmap(_img52);
     ui->label_053->setPixmap(_img53);
     ui->label_054->setPixmap(_img54);
     ui->label_055->setPixmap(_img55);
     ui->label_056->setPixmap(_img56);
     ui->label_057->setPixmap(_img57);
     ui->label_058->setPixmap(_img58);
     ui->label_059->setPixmap(_img59);
     ui->label_060->setPixmap(_img60);
     ui->label_061->setPixmap(_img61);
     ui->label_062->setPixmap(_img62);
     ui->label_063->setPixmap(_img63);
     ui->label_064->setPixmap(_img0);



}

void play8x8::move(int x, int y, int a[])
{
    int &ix = _iarrBlankCoord[0];
    int &iy = _iarrBlankCoord[1]; //引用
    c[0] = _iarrBlankCoord[0];
    c[1] = _iarrBlankCoord[1];
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

void play8x8::move_f(int i)
{
    int &x = _iarrBlankCoord[0];
    int &y = _iarrBlankCoord[1];

    if (i == 1) { //上(0在下，和上面的换)
        if (y != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y - 1][x]);
            y--;
        }

    } else if (i == 2) { //下（0在上，和下面的换）
        if (y != pg_iRank8 - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y + 1][x]);
            y++;
        }

    } else if (i == 3) { //左
        if (x != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x - 1]);
            x--;
        }
    } else if (i == 4) { //右
        if (x != pg_iRank8 - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x + 1]);
            x++;
        }
    }
}

void play8x8::upset()
{
    //打乱300次
    for (int i = 0; i < 300; i++) {
        //Sleep(1000);
        move_f(rand() % 4 + 1); //生成随机数
    }
}

void play8x8::showpicture()
{
    //QString tmp_label = QString("QLabel_%1").arg(k);
    //QString tmp_img = QString("img%1").arg(k);
    //QLabel *p = QLabel::findChild("label_3");
    //QLabel* p =  QWidget::findChild<QLabel*>("QLabel_3");
    //QPixmap *imgd = QWidget::findChild<QPixmap*>("img6");

    int k = 1;

    for (int j = 0; j < pg_iRank8; j++) {
        for (int i = 0; i < pg_iRank8; i++) {
            QString tmp_label = QString("label_0%1").arg(k);
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
            }else if (_iarrMap[j][i] == 16) {
                p->setPixmap(_img16);
            } else if (_iarrMap[j][i] == 17) {
                p->setPixmap(_img17);
            } else if (_iarrMap[j][i] == 18) {
                p->setPixmap(_img18);
            } else if (_iarrMap[j][i] == 19) {
                p->setPixmap(_img19);
            } else if (_iarrMap[j][i] == 20) {
                p->setPixmap(_img20);
            } else if (_iarrMap[j][i] == 21) {
                p->setPixmap(_img21);
            } else if (_iarrMap[j][i] == 22) {
                p->setPixmap(_img22);
            } else if (_iarrMap[j][i] == 23) {
                p->setPixmap(_img23);
            } else if (_iarrMap[j][i] == 24) {
                p->setPixmap(_img24);
            } else if (_iarrMap[j][i] == 25) {
                p->setPixmap(_img25);
            } else if (_iarrMap[j][i] == 26) {
                p->setPixmap(_img26);
            } else if (_iarrMap[j][i] == 27) {
                p->setPixmap(_img27);
            } else if (_iarrMap[j][i] == 28) {
                p->setPixmap(_img28);
            } else if (_iarrMap[j][i] == 29) {
                p->setPixmap(_img29);
            } else if (_iarrMap[j][i] == 30) {
                p->setPixmap(_img30);
            } else if (_iarrMap[j][i] == 31) {
                p->setPixmap(_img31);
            } else if (_iarrMap[j][i] == 32) {
                p->setPixmap(_img32);
            } else if (_iarrMap[j][i] == 33) {
                p->setPixmap(_img33);
            } else if (_iarrMap[j][i] == 34) {
                p->setPixmap(_img34);
            } else if (_iarrMap[j][i] == 35) {
                p->setPixmap(_img35);
            } else if (_iarrMap[j][i] == 36) {
                p->setPixmap(_img36);
            } else if (_iarrMap[j][i] == 37) {
                p->setPixmap(_img37);
            } else if (_iarrMap[j][i] == 38) {
                p->setPixmap(_img38);
            } else if (_iarrMap[j][i] == 39) {
                p->setPixmap(_img39);
            } else if (_iarrMap[j][i] == 40) {
                p->setPixmap(_img40);
            } else if (_iarrMap[j][i] == 41) {
                p->setPixmap(_img41);
            } else if (_iarrMap[j][i] == 42) {
                p->setPixmap(_img42);
            } else if (_iarrMap[j][i] == 43) {
                p->setPixmap(_img43);
            } else if (_iarrMap[j][i] == 44) {
                p->setPixmap(_img44);
            } else if (_iarrMap[j][i] == 45) {
                p->setPixmap(_img45);
            } else if (_iarrMap[j][i] == 46) {
                p->setPixmap(_img46);
            } else if (_iarrMap[j][i] == 47) {
                p->setPixmap(_img47);
            } else if (_iarrMap[j][i] == 48) {
                p->setPixmap(_img48);
            } else if (_iarrMap[j][i] == 49) {
                p->setPixmap(_img49);
            } else if (_iarrMap[j][i] == 50) {
                p->setPixmap(_img50);
            } else if (_iarrMap[j][i] == 51) {
                p->setPixmap(_img51);
            } else if (_iarrMap[j][i] == 52) {
                p->setPixmap(_img52);
            } else if (_iarrMap[j][i] == 53) {
                p->setPixmap(_img53);
            } else if (_iarrMap[j][i] == 54) {
                p->setPixmap(_img54);
            } else if (_iarrMap[j][i] == 55) {
                p->setPixmap(_img55);
            } else if (_iarrMap[j][i] == 56) {
                p->setPixmap(_img56);
            } else if (_iarrMap[j][i] == 57) {
                p->setPixmap(_img57);
            } else if (_iarrMap[j][i] == 58) {
                p->setPixmap(_img58);
            } else if (_iarrMap[j][i] == 59) {
                p->setPixmap(_img59);
            } else if (_iarrMap[j][i] == 60) {
                p->setPixmap(_img60);
            } else if (_iarrMap[j][i] == 61) {
                p->setPixmap(_img61);
            } else if (_iarrMap[j][i] == 62) {
                p->setPixmap(_img62);
            } else if (_iarrMap[j][i] == 63) {
                p->setPixmap(_img63);
            }

            k++;
        }
    }
}

bool play8x8::bSuccessful()
{
    int num = 1;

    for (int j = 0; j < pg_iRank8; j++) {
        for (int i = 0; i < pg_iRank8; i++) {
            if (pg_iRank8 - 1 == i && pg_iRank8 - 1 == j)
                break; //当遍历到二维数组的最后一个元素时，跳出循环。

            if (_iarrMap[j][i] != num) //检查当前位置的数组元素是否与一个计数器num的值相等
                return false;
            num++;
        }
    }

    return _iarrMap[pg_iRank8 - 1][pg_iRank8 - 1] == 0;
}

void play8x8::on_btnBack_clicked()
{
    this->hide();
    this->parentWidget()->show();
    state=8;
}

void play8x8::on_btnRestart_clicked()
{
    //    init();
    //    this->show();
    timer->stop();
    time.setHMS(0, 0, 0, 0);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    start();
    sss = 0;
}
void play8x8::on_btnreturn_clicked()
{
    _iStep = _iStep - 2;
    move(c[0], c[1], c);
    showpicture();
    ui->lcdStep->display(QString::number(_iStep));
}
void play8x8::on_pushButton_3_clicked()
{
    help *configWindow = new help;

    configWindow->show();
}
