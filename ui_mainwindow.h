/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpinBox *sBox_maxAngleA;
    QLabel *label_13;
    QSpinBox *sBox_minAngleA;
    QLabel *label_iniA;
    QSpinBox *sBox_initialAngleA;
    QLabel *label_6;
    QSpinBox *sBox_addrA;
    QLabel *label;
    QDial *dial_motorA;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QSpinBox *sBox_maxAngleB;
    QLabel *label_14;
    QSpinBox *sBox_minAngleB;
    QLabel *label_iniB;
    QSpinBox *sBox_initialAngleB;
    QLabel *label_8;
    QSpinBox *sBox_addrB;
    QLabel *label_2;
    QDial *dial_motorB;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QSpinBox *sBox_maxAngleC;
    QLabel *label_15;
    QSpinBox *sBox_minAngleC;
    QLabel *label_iniC;
    QSpinBox *sBox_initialAngleC;
    QLabel *label_10;
    QSpinBox *sBox_addrC;
    QLabel *label_3;
    QDial *dial_motorC;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QSpinBox *sBox_maxAngleD;
    QLabel *label_16;
    QSpinBox *sBox_minAngleD;
    QLabel *label_iniD;
    QSpinBox *sBox_initialAngleD;
    QLabel *label_12;
    QSpinBox *sBox_addrD;
    QLabel *label_4;
    QDial *dial_motorD;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pBtn_begin;
    QPushButton *pBtn_config;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(572, 476);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);

        verticalLayout->addWidget(label_5);

        sBox_maxAngleA = new QSpinBox(centralWidget);
        sBox_maxAngleA->setObjectName(QStringLiteral("sBox_maxAngleA"));
        sBox_maxAngleA->setEnabled(true);
        sBox_maxAngleA->setMinimum(1);
        sBox_maxAngleA->setMaximum(270);
        sBox_maxAngleA->setValue(35);

        verticalLayout->addWidget(sBox_maxAngleA);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(true);

        verticalLayout->addWidget(label_13);

        sBox_minAngleA = new QSpinBox(centralWidget);
        sBox_minAngleA->setObjectName(QStringLiteral("sBox_minAngleA"));
        sBox_minAngleA->setEnabled(true);
        sBox_minAngleA->setMaximum(269);

        verticalLayout->addWidget(sBox_minAngleA);

        label_iniA = new QLabel(centralWidget);
        label_iniA->setObjectName(QStringLiteral("label_iniA"));

        verticalLayout->addWidget(label_iniA);

        sBox_initialAngleA = new QSpinBox(centralWidget);
        sBox_initialAngleA->setObjectName(QStringLiteral("sBox_initialAngleA"));
        sBox_initialAngleA->setMaximum(180);

        verticalLayout->addWidget(sBox_initialAngleA);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);

        verticalLayout->addWidget(label_6);

        sBox_addrA = new QSpinBox(centralWidget);
        sBox_addrA->setObjectName(QStringLiteral("sBox_addrA"));
        sBox_addrA->setEnabled(true);
        sBox_addrA->setMaximum(11);
        sBox_addrA->setValue(6);

        verticalLayout->addWidget(sBox_addrA);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        verticalLayout->addWidget(label);

        dial_motorA = new QDial(centralWidget);
        dial_motorA->setObjectName(QStringLiteral("dial_motorA"));
        dial_motorA->setEnabled(false);
        dial_motorA->setMaximum(180);
        dial_motorA->setValue(90);

        verticalLayout->addWidget(dial_motorA);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);

        verticalLayout_2->addWidget(label_7);

        sBox_maxAngleB = new QSpinBox(centralWidget);
        sBox_maxAngleB->setObjectName(QStringLiteral("sBox_maxAngleB"));
        sBox_maxAngleB->setEnabled(true);
        sBox_maxAngleB->setMinimum(1);
        sBox_maxAngleB->setMaximum(270);
        sBox_maxAngleB->setValue(180);

        verticalLayout_2->addWidget(sBox_maxAngleB);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(true);

        verticalLayout_2->addWidget(label_14);

        sBox_minAngleB = new QSpinBox(centralWidget);
        sBox_minAngleB->setObjectName(QStringLiteral("sBox_minAngleB"));
        sBox_minAngleB->setEnabled(true);
        sBox_minAngleB->setMaximum(269);

        verticalLayout_2->addWidget(sBox_minAngleB);

        label_iniB = new QLabel(centralWidget);
        label_iniB->setObjectName(QStringLiteral("label_iniB"));

        verticalLayout_2->addWidget(label_iniB);

        sBox_initialAngleB = new QSpinBox(centralWidget);
        sBox_initialAngleB->setObjectName(QStringLiteral("sBox_initialAngleB"));
        sBox_initialAngleB->setMaximum(180);
        sBox_initialAngleB->setValue(90);

        verticalLayout_2->addWidget(sBox_initialAngleB);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);

        verticalLayout_2->addWidget(label_8);

        sBox_addrB = new QSpinBox(centralWidget);
        sBox_addrB->setObjectName(QStringLiteral("sBox_addrB"));
        sBox_addrB->setEnabled(true);
        sBox_addrB->setMaximum(11);
        sBox_addrB->setValue(7);

        verticalLayout_2->addWidget(sBox_addrB);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);

        verticalLayout_2->addWidget(label_2);

        dial_motorB = new QDial(centralWidget);
        dial_motorB->setObjectName(QStringLiteral("dial_motorB"));
        dial_motorB->setEnabled(false);
        dial_motorB->setMaximum(180);
        dial_motorB->setValue(90);

        verticalLayout_2->addWidget(dial_motorB);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(true);

        verticalLayout_3->addWidget(label_9);

        sBox_maxAngleC = new QSpinBox(centralWidget);
        sBox_maxAngleC->setObjectName(QStringLiteral("sBox_maxAngleC"));
        sBox_maxAngleC->setEnabled(true);
        sBox_maxAngleC->setMinimum(1);
        sBox_maxAngleC->setMaximum(270);
        sBox_maxAngleC->setValue(180);

        verticalLayout_3->addWidget(sBox_maxAngleC);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setEnabled(true);

        verticalLayout_3->addWidget(label_15);

        sBox_minAngleC = new QSpinBox(centralWidget);
        sBox_minAngleC->setObjectName(QStringLiteral("sBox_minAngleC"));
        sBox_minAngleC->setEnabled(true);
        sBox_minAngleC->setMaximum(269);

        verticalLayout_3->addWidget(sBox_minAngleC);

        label_iniC = new QLabel(centralWidget);
        label_iniC->setObjectName(QStringLiteral("label_iniC"));

        verticalLayout_3->addWidget(label_iniC);

        sBox_initialAngleC = new QSpinBox(centralWidget);
        sBox_initialAngleC->setObjectName(QStringLiteral("sBox_initialAngleC"));
        sBox_initialAngleC->setMaximum(180);
        sBox_initialAngleC->setValue(90);

        verticalLayout_3->addWidget(sBox_initialAngleC);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);

        verticalLayout_3->addWidget(label_10);

        sBox_addrC = new QSpinBox(centralWidget);
        sBox_addrC->setObjectName(QStringLiteral("sBox_addrC"));
        sBox_addrC->setEnabled(true);
        sBox_addrC->setMaximum(11);
        sBox_addrC->setValue(8);

        verticalLayout_3->addWidget(sBox_addrC);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        verticalLayout_3->addWidget(label_3);

        dial_motorC = new QDial(centralWidget);
        dial_motorC->setObjectName(QStringLiteral("dial_motorC"));
        dial_motorC->setEnabled(false);
        dial_motorC->setMaximum(180);
        dial_motorC->setValue(90);

        verticalLayout_3->addWidget(dial_motorC);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(true);

        verticalLayout_4->addWidget(label_11);

        sBox_maxAngleD = new QSpinBox(centralWidget);
        sBox_maxAngleD->setObjectName(QStringLiteral("sBox_maxAngleD"));
        sBox_maxAngleD->setEnabled(true);
        sBox_maxAngleD->setMinimum(1);
        sBox_maxAngleD->setMaximum(270);
        sBox_maxAngleD->setValue(180);

        verticalLayout_4->addWidget(sBox_maxAngleD);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setEnabled(true);

        verticalLayout_4->addWidget(label_16);

        sBox_minAngleD = new QSpinBox(centralWidget);
        sBox_minAngleD->setObjectName(QStringLiteral("sBox_minAngleD"));
        sBox_minAngleD->setEnabled(true);
        sBox_minAngleD->setMaximum(269);

        verticalLayout_4->addWidget(sBox_minAngleD);

        label_iniD = new QLabel(centralWidget);
        label_iniD->setObjectName(QStringLiteral("label_iniD"));

        verticalLayout_4->addWidget(label_iniD);

        sBox_initialAngleD = new QSpinBox(centralWidget);
        sBox_initialAngleD->setObjectName(QStringLiteral("sBox_initialAngleD"));
        sBox_initialAngleD->setMaximum(180);
        sBox_initialAngleD->setValue(90);

        verticalLayout_4->addWidget(sBox_initialAngleD);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(true);

        verticalLayout_4->addWidget(label_12);

        sBox_addrD = new QSpinBox(centralWidget);
        sBox_addrD->setObjectName(QStringLiteral("sBox_addrD"));
        sBox_addrD->setEnabled(true);
        sBox_addrD->setMaximum(11);
        sBox_addrD->setValue(9);

        verticalLayout_4->addWidget(sBox_addrD);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);

        verticalLayout_4->addWidget(label_4);

        dial_motorD = new QDial(centralWidget);
        dial_motorD->setObjectName(QStringLiteral("dial_motorD"));
        dial_motorD->setEnabled(false);
        dial_motorD->setMaximum(180);
        dial_motorD->setValue(90);

        verticalLayout_4->addWidget(dial_motorD);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pBtn_begin = new QPushButton(centralWidget);
        pBtn_begin->setObjectName(QStringLiteral("pBtn_begin"));

        horizontalLayout_2->addWidget(pBtn_begin);

        pBtn_config = new QPushButton(centralWidget);
        pBtn_config->setObjectName(QStringLiteral("pBtn_config"));
        pBtn_config->setEnabled(false);

        horizontalLayout_2->addWidget(pBtn_config);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Max Angle", Q_NULLPTR));
        sBox_maxAngleA->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Min Angle", Q_NULLPTR));
        sBox_minAngleA->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_iniA->setText(QApplication::translate("MainWindow", "Initial angle:", Q_NULLPTR));
        sBox_initialAngleA->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Servo No.", Q_NULLPTR));
        sBox_addrA->setPrefix(QApplication::translate("MainWindow", "No. ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Motor A :", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Max Angle", Q_NULLPTR));
        sBox_maxAngleB->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Min Angle", Q_NULLPTR));
        sBox_minAngleB->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_iniB->setText(QApplication::translate("MainWindow", "Initial angle:", Q_NULLPTR));
        sBox_initialAngleB->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Servo No.", Q_NULLPTR));
        sBox_addrB->setPrefix(QApplication::translate("MainWindow", "No. ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Motor B:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Max Angle", Q_NULLPTR));
        sBox_maxAngleC->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Min Angle", Q_NULLPTR));
        sBox_minAngleC->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_iniC->setText(QApplication::translate("MainWindow", "Initial angle:", Q_NULLPTR));
        sBox_initialAngleC->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Servo No.", Q_NULLPTR));
        sBox_addrC->setPrefix(QApplication::translate("MainWindow", "No. ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Motor C:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Max Angle", Q_NULLPTR));
        sBox_maxAngleD->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Min Angle", Q_NULLPTR));
        sBox_minAngleD->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_iniD->setText(QApplication::translate("MainWindow", "Initial angle:", Q_NULLPTR));
        sBox_initialAngleD->setSuffix(QApplication::translate("MainWindow", " degree", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Servo No.", Q_NULLPTR));
        sBox_addrD->setPrefix(QApplication::translate("MainWindow", "No. ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Motor D:", Q_NULLPTR));
        pBtn_begin->setText(QApplication::translate("MainWindow", "Begin", Q_NULLPTR));
        pBtn_config->setText(QApplication::translate("MainWindow", "Config", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
