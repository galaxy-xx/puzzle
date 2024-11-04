#include "dlgPlay.h"
#include "dlgmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DlgMenu w;
    w.show();
    return a.exec();
}
