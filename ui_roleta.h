/********************************************************************************
** Form generated from reading UI file 'roleta.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLETA_H
#define UI_ROLETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Roleta
{
public:
    QWidget *centralwidget;
    QWidget *win;
    QWidget *rol;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Roleta)
    {
        if (Roleta->objectName().isEmpty())
            Roleta->setObjectName("Roleta");
        Roleta->resize(800, 600);
        Roleta->setStyleSheet(QString::fromUtf8("background-color: rgb(100,100,100);"));
        centralwidget = new QWidget(Roleta);
        centralwidget->setObjectName("centralwidget");
        win = new QWidget(centralwidget);
        win->setObjectName("win");
        win->setGeometry(QRect(11, 41, 778, 498));
        win->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(104, 187, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        rol = new QWidget(centralwidget);
        rol->setObjectName("rol");
        rol->setGeometry(QRect(11, 41, 778, 0));
        rol->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Roleta->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Roleta);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Roleta->setMenuBar(menubar);
        statusbar = new QStatusBar(Roleta);
        statusbar->setObjectName("statusbar");
        Roleta->setStatusBar(statusbar);

        retranslateUi(Roleta);

        QMetaObject::connectSlotsByName(Roleta);
    } // setupUi

    void retranslateUi(QMainWindow *Roleta)
    {
        Roleta->setWindowTitle(QCoreApplication::translate("Roleta", "Roleta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Roleta: public Ui_Roleta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLETA_H
