#include "DlgPlaying.h"
#include "ui_DlgPlaying.h"
#include "s8number.h"
#include <QRandomGenerator>
#include <QStringList>
#include <QImage>
#include <QTimer>
#include <string.h>
#include <QTime>
#include <QDialog>
#include <QApplication>
#include <cstdlib>
#include <ctime>
#include <QFileDialog>          //文件
#include <QLabel>               //标签
#include <QMessageBox>          //信息框
#include <QMouseEvent>          //鼠标点击事件
#include <windows.h>            //sleep

int  a[10];
int  s=0;
const int g_iRank = 3;//尺寸设置
extern std::string way[1000];
extern int  save;
extern int state;
extern int index;
int  xx;
int _iarrMap[3][3];

DlgPlaying::DlgPlaying(QWidget *parent) :

    QDialog(parent),
    ui(new Ui::DlgPlaying)
    , _bStart(false)
    , _iStep(0)
{
    time.setHMS(0,0,0,0);//设置初始值
    timer = new QTimer(this);//创建一个定时器
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
    if (save==1)
    {
        // 生成一个随机索引
        int randomIndex = QRandomGenerator::global()->bounded(imagePaths.size());
        xx=randomIndex;
        _strPos = imagePaths[randomIndex];
    }
    else
    {
        _strPos = "W://img/1.png";
    }

    ui->setupUi(this);

    init();

    connect(this, SIGNAL(sig_restart()), this, SLOT(on_btnRestart_clicked()));
    connect(this, SIGNAL(sig_return()), this, SLOT(on_btnreturn_clicked()));
    connect(this, SIGNAL(sig_back()), this, SLOT(on_btnBack_clicked()));
}

DlgPlaying::~DlgPlaying()//删除了ui指针所指向的Ui::dlgMenu对象
{
    delete ui;
}

//开始游戏
void DlgPlaying::start()
{
    time.setHMS(0,0,0,0);//设置初始值
    timer = new QTimer(this);//创建一个定时器
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    _bStart = 1;      //标记为开始游戏
    _iStep = 0;
    ui->lcdStep->display("0");
    DlgPlaying::upset();//打乱
    DlgPlaying::showpicture();//显示图案
}
void DlgPlaying::update()
{
    static quint32 time_out=0;
    time_out++;
    time=time.addSecs(1);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
}

void DlgPlaying::mousePressEvent(QMouseEvent *event)
{
    //鼠标点击事件
    // 如果是鼠标左键按下
    if(event->button() == Qt::LeftButton)
    {
        if(s==0)
        {
            timer->start(1000);
            s++;
        }
        if(!_bStart)
        {
            QMessageBox::information(NULL, "提示", "请先点击开始游戏按钮");
            return ;
        }
            //记录鼠标所在的几何位置，将全局鼠标位置转换为当前窗口的坐标系统下的位置，然后通过contains方法判断这个位置是否在标签的几何区域内。
        if (ui->label_1->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //0 0
            move(0, 0,a);//本质上移动空白的位置，使之到0，0

        }
        else if (ui->label_2->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //1 0
            move(1, 0,a);

        }
        else if (ui->label_3->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //2 0
            move(2, 0,a);

        }
        else if (ui->label_4->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //0 1
            move(0, 1,a);

        }
        else if (ui->label_5->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 1 1
            move(1, 1,a);

        }
        else if (ui->label_6->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 2 1
            move(2, 1,a);

        }
        else if (ui->label_7->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 0 2
            move(0, 2,a);

        }
        else if (ui->label_8->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 1 2
            move(1, 2,a);

        }
        else if (ui->label_9->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 2 2
            move(2, 2,a);

        }

        showpicture();
        ui->lcdStep->display(QString::number(_iStep));

        if (bSuccessful())
        {
            QApplication::setQuitOnLastWindowClosed(false);//设置了应用程序在最后一个窗口关闭时不自动退出
            QMessageBox:: StandardButton result = QMessageBox::information(NULL, "游戏胜利！ ", "继续游戏？", QMessageBox::Yes|QMessageBox::No);
            if (result == QMessageBox::Yes)
            {
                emit sig_restart();

            }
            else
            {
                emit sig_back();

            }
        }
    }
}

//初始化
void DlgPlaying::init()
{

    //初始化拼图
    int num = 1;
    for (int i = 0; i < g_iRank; i++) {
        for (int j = 0; j < g_iRank; j++) {
            _iarrMap[i][j] = num;//map中标记为数字
            num++;
        }
    }

    _iarrMap[2][2] = 0;
    _iarrBlankCoord[0] = 2, _iarrBlankCoord[1] = 2;//空白部分坐标

    // Qt显示图片
    //ui->d_label->setScaledContents(true);

    /*ZQPixmap *pixmap = new QPixmap(_strPos);
    pixmap->scaled(ui->labPic->size(), Qt::KeepAspectRatio);
    ui->labPic->setScaledContents(true);
    ui->labPic->setPixmap(*pixmap);*/

    // 插入空白图片
    QPixmap *pixBlank = new QPixmap(":/img/blank.png");
    pixBlank->scaled(ui->time_labl->size(), Qt::KeepAspectRatio);
    _img0 = pixBlank->copy(0, 0, pixBlank->width(), pixBlank->height());


    //ui->label_12->setScaledContents(true);
    QPixmap *pixmap1 = new QPixmap(_strPos);
   // pixmap1->scaled(ui->labPic->size()*2, Qt::KeepAspectRatio);

    //切割图片//从pixmap1的左上角（坐标为 (0, 0)）开始，复制一个宽度为pixmap1宽度的三分之一，高度为pixmap1高度的三分之一的区域，并将其存储在_img1中
    _img1 = pixmap1->copy(0,                    0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img2 = pixmap1->copy(pixmap1->width()/3,   0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img3 = pixmap1->copy(pixmap1->width()/3*2, 0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img4 = pixmap1->copy(0,                    pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img5 = pixmap1->copy(pixmap1->width()/3,   pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img6 = pixmap1->copy(pixmap1->width()/3*2, pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img7 = pixmap1->copy(0,                    pixmap1->height()/3*2,  pixmap1->width()/3, pixmap1->height()/3);
    _img8 = pixmap1->copy(pixmap1->width()/3,   pixmap1->height()/3*2,  pixmap1->width()/3, pixmap1->height()/3);

    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_6->setScaledContents(true);
    ui->label_7->setScaledContents(true);
    ui->label_8->setScaledContents(true);
    ui->label_9->setScaledContents(true);

    ui->label_1->setText("1");
    ui->label_2->setText("2");
    ui->label_3->setText("3");
    ui->label_4->setText("4");
    ui->label_5->setText("5");
    ui->label_6->setText("6");
    ui->label_7->setText("7");
    ui->label_8->setText("8");
    ui->label_9->setText("9");


    ui->label_1->setPixmap(_img1);
    ui->label_2->setPixmap(_img2);
    ui->label_3->setPixmap(_img3);
    ui->label_4->setPixmap(_img4);
    ui->label_5->setPixmap(_img5);
    ui->label_6->setPixmap(_img6);
    ui->label_7->setPixmap(_img7);
    ui->label_8->setPixmap(_img8);
    ui->label_9->setPixmap(_img0);
}


void DlgPlaying::move(int x, int y,int a[])
{
    int& ix = _iarrBlankCoord[0];
    int& iy = _iarrBlankCoord[1];//引用
    a[0]=_iarrBlankCoord[0];
    a[1]=_iarrBlankCoord[1];
    if( ix == x )//x坐标相同时
    {
        if( qAbs(iy - y ) == 1 )//判断垂直方向上相邻
        {
            qSwap(_iarrMap[iy][ix], _iarrMap[y][x]);//qswap交换了二维数组_iarrMap中坐标为(iy, ix)和(y, x)的两个元素的值
            ix = x;
            iy = y;
            _iStep++;
        }
    }
    else if( iy == y )//y坐标相同时
    {
        if( qAbs(ix - x ) == 1 )//判断水平结构上相同
        {
            qSwap(_iarrMap[iy][ix], _iarrMap[y][x]);
            ix = x;
            iy = y;
            _iStep++;
        }
    }
}

void DlgPlaying::move_f(int i)
{
    int& x = _iarrBlankCoord[0];
    int& y = _iarrBlankCoord[1];

    if (i == 1) {                   //上(0在下，和上面的换)
        if (y != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y-1][x]);
            y--;
        }

    }
    else if (i == 2) {             //下（0在上，和下面的换）
        if (y != g_iRank - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y+1][x]);
            y++;
        }

    }
    else if (i == 3) {             //左
        if (x != 0) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x-1]);
            x--;
        }
    }
    else if (i == 4) {             //右
        if (x != g_iRank - 1) {
            std::swap(_iarrMap[y][x], _iarrMap[y][x+1]);
            x++;
        }
    }
}

void DlgPlaying::upset()
{
    //打乱300次
    for (int i = 0; i < 300; i++) {
        //Sleep(1000);
        move_f(rand()%4+1);//生成随机数

    }
}

void DlgPlaying::showpicture()
{
    //QString tmp_label = QString("QLabel_%1").arg(k);
    //QString tmp_img = QString("img%1").arg(k);
    //QLabel *p = QLabel::findChild("label_3");
    //QLabel* p =  QWidget::findChild<QLabel*>("QLabel_3");
    //QPixmap *imgd = QWidget::findChild<QPixmap*>("img6");

    int k = 1;

    for(int j = 0 ; j < g_iRank ; j++ ) {
        for(int i = 0 ; i < g_iRank ; i++ ) {

            QString tmp_label = QString("label_%1").arg(k);
            //tmp_img = QString("img%1").arg(map[j][i]);
            //根据控件名得到控件指针
            QLabel *p = QWidget::findChild<QLabel*>(tmp_label);

            if(_iarrMap[j][i] == 0) {
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
            }

            k++;
        }
    }
}

bool DlgPlaying::bSuccessful()
{
    int num = 1;

    for(int j = 0 ; j < g_iRank ; j++ ) {
        for(int i = 0 ; i < g_iRank ; i++ ) {

            if (g_iRank-1 == i && g_iRank - 1 == j)
                break;//当遍历到二维数组的最后一个元素时，跳出循环。

            if (_iarrMap[j][i] != num)//检查当前位置的数组元素是否与一个计数器num的值相等
                return false;
            num++;
        }
    }

    return _iarrMap[g_iRank-1][g_iRank-1] == 0;
}

void DlgPlaying::on_btnBack_clicked()
{
    this->hide();
    this->parentWidget()->show();
    state=3;
}

void DlgPlaying::on_btnRestart_clicked()
{
    timer->stop();
    time.setHMS(0,0,0,0);
    ui->lcdStep_2->display(time.toString("hh:mm:ss"));
    start();
    s=0;

}
void DlgPlaying::on_btnreturn_clicked()
{
    _iStep=_iStep-2;
    move(a[0],a[1],a);
    showpicture();
    ui->lcdStep->display(QString::number(_iStep));
}
void DlgPlaying::on_pushButton_3_clicked()
{
    help *configWindow = new help;

    configWindow->show();
}


void DlgPlaying::on_pushButton_2_clicked()
{
    main1();
    // std::string way[] = {"down", "left", "up", "left", "down", "right", "up", "right", "down", "left", "down", "right", "up", "up", "left", "down", "left", "up", "right", "down", "down", "left", "up", "up"};
    for (int i = 0; i < 99; ++i)
    {
        if(way[i]=="up") {move_f(2);showpicture();};
        if(way[i]=="down") {move_f(1);showpicture();};
        if(way[i]=="left") {move_f(4);showpicture();};
        if(way[i]=="right") {move_f(3);showpicture();};

    }
    std::string way="";
    this->parentWidget()->show();
}

