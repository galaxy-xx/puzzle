#ifndef PLAY8X8_H
#define PLAY8X8_H

#include <QDialog>
#include <QTime>
#include <QTimer>
#include "help.h"
namespace Ui {
class play8x8;
}

class play8x8 : public QDialog
{
    Q_OBJECT

public:
    explicit play8x8(QWidget *parent = nullptr);
    ~play8x8();
    QTimer *timer;
    QTime time;
    void start();

private:
    Ui::play8x8 *ui;
    QPixmap _img0,_img1, _img2, _img3, _img4, _img5, _img6, _img7, _img8, _img9, _img10, _img11, _img12, _img13, _img14, _img15, _img16, _img17, _img18, _img19, _img20, _img21, _img22, _img23, _img24, _img25, _img26, _img27, _img28, _img29, _img30, _img31, _img32, _img33, _img34, _img35, _img36, _img37, _img38, _img39, _img40, _img41, _img42, _img43, _img44, _img45, _img46, _img47, _img48, _img49, _img50, _img51, _img52, _img53, _img54, _img55, _img56, _img57, _img58, _img59, _img60, _img61, _img62, _img63;
    int _iarrMap[8][8];
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

#endif // PLAY8X8_H
