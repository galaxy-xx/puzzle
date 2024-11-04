#ifndef PLAY4_H
#define PLAY4_H

#include <QDialog>
#include <QTime>
#include <QTimer>
#include "help.h"
namespace Ui {
class play4;
}

class play4 : public QDialog
{
    Q_OBJECT

public:
    explicit play4(QWidget *parent = nullptr);
    ~play4();
    QTimer *timer;
    QTime time;
    void start();

private:
    Ui::play4 *ui;
    QPixmap _img1, _img2, _img3, _img4, _img5, _img6, _img7, _img8, _img0, _img9, _img10, _img11,
        _img12, _img13, _img14, _img15;
    int _iarrMap[4][4];
    int _iarrBlankCoord[2];
    QString _strPos;

    bool _bStart;
    int _iStep;
    void mousePressEvent(QMouseEvent *event);

    void init();
    void move(int x, int y, int a[]);
    void move_f(int i);
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
};

#endif // PLAY4_H
