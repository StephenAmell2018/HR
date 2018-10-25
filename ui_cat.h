/********************************************************************************
** Form generated from reading UI file 'cat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAT_H
#define UI_CAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cat
{
public:
    QWidget *centralWidget;
    QPushButton *camera;
    QPushButton *roi;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cat)
    {
        if (cat->objectName().isEmpty())
            cat->setObjectName(QStringLiteral("cat"));
        cat->resize(1070, 721);
        centralWidget = new QWidget(cat);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        camera = new QPushButton(centralWidget);
        camera->setObjectName(QStringLiteral("camera"));
        camera->setGeometry(QRect(20, 560, 108, 32));
        roi = new QPushButton(centralWidget);
        roi->setObjectName(QStringLiteral("roi"));
        roi->setGeometry(QRect(170, 560, 113, 32));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 560, 113, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 421, 351));
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(500, 10, 441, 351));
        cat->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cat);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1070, 22));
        cat->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cat);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        cat->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cat);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cat->setStatusBar(statusBar);

        retranslateUi(cat);

        QMetaObject::connectSlotsByName(cat);
    } // setupUi

    void retranslateUi(QMainWindow *cat)
    {
        cat->setWindowTitle(QApplication::translate("cat", "cat", nullptr));
        camera->setText(QApplication::translate("cat", "start_show", nullptr));
        roi->setText(QApplication::translate("cat", "start_calc", nullptr));
        pushButton_3->setText(QApplication::translate("cat", "end_prog", nullptr));
        label->setText(QApplication::translate("cat", "<html><head/><body><p><span style=\" font-size:24pt; color:#21ff06;\">origin</span></p></body></html>", nullptr));
        label2->setText(QApplication::translate("cat", "<html><head/><body><p><span style=\" font-size:24pt;\">interst</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cat: public Ui_cat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAT_H
