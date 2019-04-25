/********************************************************************************
** Form generated from reading UI file 'ShowVideoDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWVIDEODEMO_H
#define UI_SHOWVIDEODEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowVideoDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShowVideoDemoClass)
    {
        if (ShowVideoDemoClass->objectName().isEmpty())
            ShowVideoDemoClass->setObjectName(QStringLiteral("ShowVideoDemoClass"));
        ShowVideoDemoClass->resize(600, 400);
        menuBar = new QMenuBar(ShowVideoDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ShowVideoDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ShowVideoDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ShowVideoDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ShowVideoDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ShowVideoDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ShowVideoDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ShowVideoDemoClass->setStatusBar(statusBar);

        retranslateUi(ShowVideoDemoClass);

        QMetaObject::connectSlotsByName(ShowVideoDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ShowVideoDemoClass)
    {
        ShowVideoDemoClass->setWindowTitle(QApplication::translate("ShowVideoDemoClass", "ShowVideoDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowVideoDemoClass: public Ui_ShowVideoDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWVIDEODEMO_H
