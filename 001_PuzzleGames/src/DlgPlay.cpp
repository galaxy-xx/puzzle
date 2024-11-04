#include "dlgPlay.h"
#include "ui_dlgplay.h"

#include <QImage>
#include <QFileDialog>          //文件
#include <QLabel>               //标签
#include <QMessageBox>          //信息框
#include <QMouseEvent>          //鼠标点击事件
#include <windows.h>            //sleep

const int g_iRank = 3;

DlgPlay::DlgPlay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DlgPlay)
    , _strPos(":/img/tup.jpg")
    , _bStart(false)
{
    ui->setupUi(this);
    //添加图片资源：https://www.cnblogs.com/lcgbk/p/13259754.html

    init();
}

DlgPlay::~DlgPlay()
{
    delete ui;
}

void DlgPlay::mousePressEvent(QMouseEvent *event)
{
    //鼠标点击事件（https://www.cnblogs.com/aiguona/p/9999507.html）
    // 如果是鼠标左键按下
    if(event->button() == Qt::LeftButton)
    {
        /*
        if (i == 1) {       //向下           //上(0在下，和上面的换)
        else if (i == 2) {  //向上           //下（0在上，和下面的换）
        else if (i == 3) {  //向右           //左(0在右，和左面的换)
        else if (i == 4) {  //向左           //右(0在左，和右面的换)
        */
        if(!_bStart)
        {
            QMessageBox::information(NULL, "提示", "请先点击开始游戏按钮");
            return ;
        }

        if (ui->label_3->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //0 0
            move(0, 0);
            showpicture();
        }
        else if (ui->label_4->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //1 0
            move(1, 0);
            showpicture();
        }
        else if (ui->label_5->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //2 0
            move(2, 0);
            showpicture();
        }
        else if (ui->label_6->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            //0 1
            move(0, 1);
            showpicture();
        }
        else if (ui->label_7->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 1 1
            move(1, 1);
            showpicture();
        }
        else if (ui->label_8->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 2 1
            move(2, 1);
            showpicture();
        }
        else if (ui->label_9->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 0 2
            move(0, 2);
            showpicture();
        }
        else if (ui->label_10->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 1 2
            move(1, 2);
            showpicture();
        }
        else if (ui->label_11->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        {
            // 2 2
            move(2, 2);
            showpicture();
        }

        if (bSuccessful())
            QMessageBox::information(NULL, " ", "游戏胜利");
    }
}

//初始化
void DlgPlay::init()
{
    //初始化拼图
    int num = 1;
    for (int i = 0; i < g_iRank; i++) {
        for (int j = 0; j < g_iRank; j++) {
            _iarrMap[i][j] = num;
            num++;
        }
    }

    _iarrMap[2][2] = 0;
    _iarrBlankCoord[0] = 2, _iarrBlankCoord[1] = 2;

    // Qt显示图片（https://blog.csdn.net/linuxweiyh/article/details/76683479）
    //ui->d_label->setScaledContents(true);

    QPixmap *pixmap = new QPixmap(_strPos);
    pixmap->scaled(ui->labTitle->size(), Qt::KeepAspectRatio);
    ui->label_2->setScaledContents(true);
    ui->label_2->setPixmap(*pixmap);

    // 插入空白图片
    QPixmap *pixBlank = new QPixmap(":/img/blank.png");
    pixBlank->scaled(ui->labTitle->size(), Qt::KeepAspectRatio);
    _img0 = pixBlank->copy(0, 0, pixBlank->width(), pixBlank->height());


    //ui->label_12->setScaledContents(true);
    QPixmap *pixmap1 = new QPixmap(_strPos);
    pixmap1->scaled(ui->labTitle->size()*2, Qt::KeepAspectRatio);

    //切割图片
    _img1 = pixmap1->copy(0,                    0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img2 = pixmap1->copy(pixmap1->width()/3,   0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img3 = pixmap1->copy(pixmap1->width()/3*2, 0,                      pixmap1->width()/3, pixmap1->height()/3);
    _img4 = pixmap1->copy(0,                    pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img5 = pixmap1->copy(pixmap1->width()/3,   pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img6 = pixmap1->copy(pixmap1->width()/3*2, pixmap1->height()/3,    pixmap1->width()/3, pixmap1->height()/3);
    _img7 = pixmap1->copy(0,                    pixmap1->height()/3*2,  pixmap1->width()/3, pixmap1->height()/3);
    _img8 = pixmap1->copy(pixmap1->width()/3,   pixmap1->height()/3*2,  pixmap1->width()/3, pixmap1->height()/3);

    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_6->setScaledContents(true);
    ui->label_7->setScaledContents(true);
    ui->label_8->setScaledContents(true);
    ui->label_9->setScaledContents(true);
    ui->label_10->setScaledContents(true);
    ui->label_11->setScaledContents(true);

    ui->label_3->setText("1");
    ui->label_4->setText("2");
    ui->label_5->setText("3");
    ui->label_6->setText("4");
    ui->label_7->setText("5");
    ui->label_8->setText("6");
    ui->label_9->setText("7");
    ui->label_10->setText("8");
    ui->label_11->setText("9");


    ui->label_3->setPixmap(_img1);
    ui->label_4->setPixmap(_img2);
    ui->label_5->setPixmap(_img3);
    ui->label_6->setPixmap(_img4);
    ui->label_7->setPixmap(_img5);
    ui->label_8->setPixmap(_img6);
    ui->label_9->setPixmap(_img7);
    ui->label_10->setPixmap(_img8);
    ui->label_11->setPixmap(_img0);
}


void DlgPlay::move(int x, int y)
{
    int& ix = _iarrBlankCoord[0];
    int& iy = _iarrBlankCoord[1];

    if( ix == x )
    {
        if( qAbs(iy - y ) == 1 )
        {
            qSwap(_iarrMap[iy][ix], _iarrMap[y][x]);
            ix = x;
            iy = y;
        }
    }
    else if( iy == y )
    {
        if( qAbs(ix - x ) == 1 )
        {
            qSwap(_iarrMap[iy][ix], _iarrMap[y][x]);
            ix = x;
            iy = y;
        }
    }
}

void DlgPlay::move_f(int i)
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

void DlgPlay::upset()
{
   //打乱300次
   for (int i = 0; i < 300; i++) {
       //Sleep(1000);
       move_f(rand() % 4 + 1);
       //showpicture();
   }
}

void DlgPlay::showpicture()
{
    //QString tmp_label = QString("QLabel_%1").arg(k);
    //QString tmp_img = QString("img%1").arg(k);
    //QLabel *p = QLabel::findChild("label_3");
    //QLabel* p =  QWidget::findChild<QLabel*>("QLabel_3");
    //QPixmap *imgd = QWidget::findChild<QPixmap*>("img6");

    int k = 3;

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

bool DlgPlay::bSuccessful()
{
    int num = 1;

    for(int j = 0 ; j < g_iRank ; j++ ) {
        for(int i = 0 ; i < g_iRank ; i++ ) {

            if (g_iRank-1 == i && g_iRank - 1 == j)
                break;

            if (_iarrMap[j][i] != num)
                return false;
            num++;
        }
    }

    return _iarrMap[g_iRank-1][g_iRank-1] == 0;
}



//开始游戏
void DlgPlay::on_btnGameStart_clicked()
{
    _bStart = 1;      //标记为开始游戏
    DlgPlay::upset();
    DlgPlay::showpicture();
}


//使用说明
void DlgPlay::on_btnGameRules_clicked()
{
    //信息框（https://www.cnblogs.com/zhoug2020/p/10094855.html，注意加上头文件）
    QMessageBox::information(NULL, "游戏说明", "介绍：\n拼图游戏是一张图片分为若干块，打乱次序，将其中一块变为空白块，其只能与相邻块互换，发挥你的聪明才智来将其复原。\n操作说明：\n用鼠标点击空白块附近的图即可以将该图移到空白块的位置。");
}

//退出游戏按钮
void DlgPlay::on_btnExit_clicked()
{
     exit(1);
}


void DlgPlay::on_btnImportPic_clicked()
{
    //(文件对话框：http://c.biancheng.net/view/1870.html)
    //选择单个文件
    QString curPath=QDir::currentPath();//获取系统当前目录
    //获取应用程序的路径
    QString dlgTitle="请选择图片文件"; //对话框标题
    QString filter="图片文件(*.jpg *.gif *.png);"; //文件过滤器
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    _strPos = aFileName;
    //qDebug()<<pos;
    init();

}
