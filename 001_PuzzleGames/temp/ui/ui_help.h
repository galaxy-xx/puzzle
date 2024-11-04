/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QLabel *label;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName("help");
        help->resize(431, 431);
        label = new QLabel(help);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 431, 431));

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "\346\217\220\347\244\272", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
