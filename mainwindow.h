#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCoreApplication>
#include <QtGui>
#include <QString>
//#include <QThread>
//#include <QMutex>
//#include <QTimer>
//#include <QTime>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <wiringPi.h>
#include "servoslavei2c.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_dial_motorA_valueChanged(int value);

    void on_dial_motorB_valueChanged(int value);

    void on_dial_motorC_valueChanged(int value);

    void on_dial_motorD_valueChanged(int value);

    void on_pBtn_begin_clicked();

    void on_pBtn_config_clicked();

    void on_sBox_minAngleA_valueChanged(int arg1);

    void on_sBox_maxAngleA_valueChanged(int arg1);

    void on_sBox_minAngleB_valueChanged(int arg1);

    void on_sBox_maxAngleB_valueChanged(int arg1);

    void on_sBox_minAngleC_valueChanged(int arg1);

    void on_sBox_maxAngleC_valueChanged(int arg1);

    void on_sBox_minAngleD_valueChanged(int arg1);

    void on_sBox_maxAngleD_valueChanged(int arg1);    

private:
    Ui::MainWindow *ui;
    ServoController *servoi2c;
};

#endif // MAINWINDOW_H
