#ifndef DLGMENU_H
#define DLGMENU_H
#include "play8x8.h"
#include <QDialog>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <QGuiApplication>
#include "DlgPlaying.h"
#include "play4x4.h"
#include <QAction>


namespace Ui {
class dlgMenu;
}

class DlgMenu : public QDialog
{
    Q_OBJECT

public:

    explicit DlgMenu(QWidget *parent = nullptr);
    ~DlgMenu();

private:
    Ui::dlgMenu *ui;

   DlgPlaying *_dlgPlay;
   play4x4 *_dlgPlay4;
    play8x8 *_dlgPlay8;

    void init();

   QMenu *fileMenu;
   QMenu *editMenu;


   QAction *myAc1;
   QAction *myAc2;
   QAction *myAc3;


private slots:
    void btnphoto_clicked();
    void on_btStart_clicked();
    void on_btnExit_clicked();

};

#endif // DLGMENU_H
