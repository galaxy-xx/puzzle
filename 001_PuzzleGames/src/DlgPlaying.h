#ifndef DLGPLAYING_H
#define DLGPLAYING_H
#include "help.h"
#include <QDialog>
#include <QTimer>
#include <QTime>
namespace Ui {
class DlgPlaying;
}

class DlgPlaying : public QDialog
{
    Q_OBJECT

public:
    explicit DlgPlaying(QWidget *parent = nullptr);
    ~DlgPlaying();
    QTimer *timer;
    QTime   time;
    void start();

private:
    Ui::DlgPlaying *ui;

    QPixmap _img1, _img2, _img3, _img4, _img5, _img6, _img7, _img8, _img0;

    int _iarrBlankCoord[2];
    QString _strPos;
    void move_f(int i);
    bool _bStart;
    int _iStep;
    void mousePressEvent(QMouseEvent *event);

    void init();
    void move(int x, int y,int a[]);

    void upset();
    void showpicture();
    bool bSuccessful();

signals:
    void sig_restart();
    void sig_back();
    void sig_return();
private slots:
    void on_btnRestart_clicked();
    void on_btnBack_clicked();
    void on_btnreturn_clicked();
    void update();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
};

#endif // DLGPLAYING_H
