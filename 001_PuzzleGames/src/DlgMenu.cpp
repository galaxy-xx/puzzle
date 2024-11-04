#include "dlgmenu.h"
#include "play4x4.h"
#include "play8x8.h"
#include "ui_DlgMenu.h"
#include <QTimer>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <qpushbutton.h>
#include <QMenu>
#include <QGuiApplication>
int  save=1;
int state=3;
DlgMenu::DlgMenu(QWidget *parent) :
    ui(new Ui::dlgMenu),
    _dlgPlay(nullptr),
    _dlgPlay4(nullptr),
    _dlgPlay8(nullptr)


{
    ui->setupUi(this) ;
    connect(ui->btnphoto, &QPushButton::clicked, this, &DlgMenu::btnphoto_clicked);


    //为"难度"添加主菜单栏
    QMenu* pPtnMenu = new QMenu;

    // QMenu* pFileMenu = new QMenu("文件");
    // pPtnMenu->addMenu(pFileMenu);

    //为文件菜单栏创建三个菜单
    QAction* pActionEasy = pPtnMenu->addAction("简单：3X3");
    QAction* pActionMiddle = pPtnMenu->addAction("中等：4X4");
    QAction* pActionHard = pPtnMenu->addAction("噩梦：8X8");

    QFont actionFont("方正行楷简体", 13);
    pActionEasy->setFont(actionFont);
    pActionMiddle->setFont(actionFont);
    pActionHard->setFont(actionFont);
    connect(pActionEasy,&QAction::triggered, this, [=](){
        state=3;
    });
    connect(pActionMiddle,&QAction::triggered, this, [=](){
        state=4;
    });
    connect(pActionHard,&QAction::triggered, this, [=](){
        state=8;
    });

    ui->btnhard->setMenu(pPtnMenu);
}

DlgMenu::~DlgMenu()
{
    delete ui;//删除了ui指针所指向的Ui::dlgMenu对象
}
//初始化，不过无用，与开始游戏按键功能重复
void DlgMenu::init()
{
   _dlgPlay = new DlgPlaying(this);
   _dlgPlay4 = new play4x4(this);
   _dlgPlay8 = new play8x8(this);

}

//开始游戏
void DlgMenu::on_btStart_clicked()//on>pushbutton_clicked,Qt默认的函数可一键实现按键点击信号与槽函数对应
{   if(state==3)
    {
        this->hide();
        if (_dlgPlay == nullptr)//如果成员变量_dlgPlay为空，启动窗口dlgplay
        {
            _dlgPlay = new DlgPlaying(this);
            _dlgPlay->start();
        }
        _dlgPlay->show();
    }
    if(state==4)
    {
        this->hide();
        if (_dlgPlay4 == nullptr)//如果成员变量_dlgPlay为空，启动窗口dlgplay
        {
            _dlgPlay4 = new play4x4(this);
            _dlgPlay4->start();
        }
        _dlgPlay4->show();
    }
    if(state==8)
    {
        this->hide();
        if (_dlgPlay8 == nullptr)//如果成员变量_dlgPlay为空，启动窗口dlgplay
        {
            _dlgPlay8 = new play8x8(this);
            _dlgPlay8->start();
        }
        _dlgPlay8->show();
    }
}
//退出游戏
void DlgMenu::on_btnExit_clicked()
{
    this->close();
}


void DlgMenu::btnphoto_clicked()
{
    save=0;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), QDir::homePath(), tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()) {
        // 检查保存目录是否存在，不存在则创建
        QDir dir("W://img/");
        if (!dir.exists()) {
            dir.mkpath(".");
        }
        QString baseName = QFileInfo(fileName).baseName();
        QString newFileName = dir.filePath( "1.png");
        QPixmap pixmap(fileName);
        // 将图片保存到指定路径
        pixmap.save(newFileName);
    }
}

