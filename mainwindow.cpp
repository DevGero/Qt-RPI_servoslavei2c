#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    servoi2c = new ServoController(SERCONT_ADDRESS, MODE_EXTND);

//    servoi2c->addMotor(9, 0, 0, 180);

    ui->statusBar->showMessage("Set all the configurations and click Begin");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete servoi2c;
}

void MainWindow::on_dial_motorA_valueChanged(int value)
{
    servoi2c->motorPos(ui->sBox_addrA->value(),value);
}

void MainWindow::on_dial_motorB_valueChanged(int value)
{
    servoi2c->motorPos(ui->sBox_addrB->value(),value);
}

void MainWindow::on_dial_motorC_valueChanged(int value)
{
    servoi2c->motorPos(ui->sBox_addrC->value(),value);
}

void MainWindow::on_dial_motorD_valueChanged(int value)
{
    servoi2c->motorPos(ui->sBox_addrD->value(),value);
}

void MainWindow::on_pBtn_begin_clicked()
{
    ui->statusBar->showMessage(" Ready TO PLAY ");
    //******MOTOR A********
    int _adr = ui->sBox_addrA->value();
    int _la = ui->sBox_minAngleA->value();
    int _ma = ui->sBox_maxAngleA->value();
    int _p = ui->sBox_initialAngleA->value();

    servoi2c->addMotor(_adr, _p, _la, _ma);

    ui->dial_motorA->setMinimum(ui->sBox_minAngleA->value());
    ui->dial_motorA->setMaximum(ui->sBox_maxAngleA->value());
    ui->dial_motorA->setEnabled(true);

    ui->sBox_initialAngleA->hide();
    ui->label_iniA->hide();
    ui->sBox_addrA->setEnabled(false);

    //******MOTOR B********

    _adr = ui->sBox_addrB->value();
    _la = ui->sBox_minAngleB->value();
    _ma = ui->sBox_maxAngleB->value();
    _p = ui->sBox_initialAngleB->value();

    servoi2c->addMotor(_adr, _p, _la, _ma);

    ui->dial_motorB->setMinimum(ui->sBox_minAngleB->value());
    ui->dial_motorB->setMaximum(ui->sBox_maxAngleB->value());
    ui->dial_motorB->setEnabled(true);

    ui->sBox_initialAngleB->hide();
    ui->label_iniB->hide();
    ui->sBox_addrB->setEnabled(false);

    //******MOTOR C********
    _adr = ui->sBox_addrC->value();
    _la = ui->sBox_minAngleC->value();
    _ma = ui->sBox_maxAngleC->value();
    _p = ui->sBox_initialAngleC->value();

    servoi2c->addMotor(_adr, _p, _la, _ma);

    ui->dial_motorC->setMinimum(ui->sBox_minAngleC->value());
    ui->dial_motorC->setMaximum(ui->sBox_maxAngleC->value());
    ui->dial_motorC->setEnabled(true);

    ui->sBox_initialAngleC->hide();
    ui->label_iniC->hide();
    ui->sBox_addrC->setEnabled(false);

    //******MOTOR D********
    _adr = ui->sBox_addrD->value();
    _la = ui->sBox_minAngleD->value();
    _ma = ui->sBox_maxAngleD->value();
    _p = ui->sBox_initialAngleD->value();

    servoi2c->addMotor(_adr, _p, _la, _ma);

    ui->dial_motorD->setMinimum(ui->sBox_minAngleD->value());
    ui->dial_motorD->setMaximum(ui->sBox_maxAngleD->value());
    ui->dial_motorD->setEnabled(true);

    ui->sBox_initialAngleD->hide();
    ui->label_iniD->hide();
    ui->sBox_addrD->setEnabled(false);

    ui->pBtn_config->setEnabled(true);
    ui->pBtn_begin->setEnabled(false);
}

void MainWindow::on_pBtn_config_clicked()
{
    ui->statusBar->showMessage("Set all the configurations and click Begin");

    ui->sBox_addrA->setEnabled(true);
    ui->sBox_addrB->setEnabled(true);
    ui->sBox_addrC->setEnabled(true);
    ui->sBox_addrD->setEnabled(true);

    ui->sBox_initialAngleA->setVisible(true);
    ui->label_iniA->setVisible(true);

    ui->sBox_initialAngleB->setVisible(true);
    ui->label_iniB->setVisible(true);

    ui->sBox_initialAngleC->setVisible(true);
    ui->label_iniC->setVisible(true);

    ui->sBox_initialAngleD->setVisible(true);
    ui->label_iniD->setVisible(true);

    ui->dial_motorA->setEnabled(false);
    ui->dial_motorB->setEnabled(false);
    ui->dial_motorC->setEnabled(false);
    ui->dial_motorD->setEnabled(false);

    ui->pBtn_begin->setEnabled(true);
}

void MainWindow::on_sBox_minAngleA_valueChanged(int arg1)
{
    ui->sBox_initialAngleA->setMinimum(arg1);
}

void MainWindow::on_sBox_maxAngleA_valueChanged(int arg1)
{
    ui->sBox_initialAngleA->setMaximum(arg1);
}

void MainWindow::on_sBox_minAngleB_valueChanged(int arg1)
{
    ui->sBox_initialAngleB->setMinimum(arg1);
}

void MainWindow::on_sBox_maxAngleB_valueChanged(int arg1)
{
    ui->sBox_initialAngleB->setMaximum(arg1);
}

void MainWindow::on_sBox_minAngleC_valueChanged(int arg1)
{
    ui->sBox_initialAngleC->setMinimum(arg1);
}

void MainWindow::on_sBox_maxAngleC_valueChanged(int arg1)
{
    ui->sBox_initialAngleC->setMaximum(arg1);
}

void MainWindow::on_sBox_minAngleD_valueChanged(int arg1)
{
    ui->sBox_initialAngleD->setMinimum(arg1);
}

void MainWindow::on_sBox_maxAngleD_valueChanged(int arg1)
{
    ui->sBox_initialAngleD->setMaximum(arg1);
}


