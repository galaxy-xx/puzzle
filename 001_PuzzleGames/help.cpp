#include "help.h"
#include "ui_help.h"
#include <QLabel>
extern int xx;
extern int save;
help::help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::help)
{
    ui->setupUi(this);
    if (save==1)
    {
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
    QPixmap pix(imagePaths[xx]);
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    }
    else
    {
        QPixmap pix("W://img/1.png");
        pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
        ui->label->setPixmap(pix);
    }

    QApplication::setQuitOnLastWindowClosed(false);

}

help::~help()
{
    delete ui;
}

