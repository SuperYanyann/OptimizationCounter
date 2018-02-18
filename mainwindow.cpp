/******************************************************************************
 * mainwindow.cpp - OptimizationCounter
 *
 * Copyright (c) 2018  Yan Wang
 *
 * DESCRIPTION: -
 *   the Optimization Counter is used to find the minimum of polynomial
 * Version：1.0
 * Copyright：Yan Wang
 * Author：Yan Wang
 * Date：2018/18/2
 *****************************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("OptimizationCounter");

    connect(ui->certain,&QPushButton::clicked,this,&MainWindow::computeOptimization);
    connect(ui->actionabout,&QAction::triggered,this,&MainWindow::displayAbout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// use to compute the min
void MainWindow::computeOptimization()
{
    QString str_x5 = ui->lineEdit_X5->text();
    int int_X5 = str_x5.toInt();
    QString str_x4 = ui->lineEdit_X4->text();
    int int_X4 = str_x4.toInt();
    QString str_x3 = ui->lineEdit_X3->text();
    int int_X3 = str_x3.toInt();
    QString str_x2 = ui->lineEdit_X2->text();
    int int_X2 = str_x2.toInt();
    QString str_x1 = ui->lineEdit_X1->text();
    int int_X1 = str_x1.toInt();
    QString str_x0 = ui->lineEdit_X0 ->text();
    int int_X0 = str_x0.toInt();

    QString epochs = ui->epoch->text();
    int int_epoch = epochs.toInt();
    QString steps = ui->step->text();
    double dou_step = steps.toDouble();

    double x0 = 0;
    double y0 = 0;
    double dx0 = 0;

    for (int i=1;i<=int_epoch;i++)
    {
        dx0 = int_X5*5*pow(x0,4.0) +  int_X4*4*pow(x0,3.0) +int_X3*3*pow(x0,2.0) +int_X2*2*pow(x0,1.0) +int_X1;
        x0 = x0 - dou_step * dx0;
    }

    double result_x = x0;
    double result_y = int_X5*pow(x0,5.0) +  int_X4*pow(x0,4.0) +int_X3*pow(x0,3.0) +int_X2*pow(x0,2.0) +int_X1*x0+int_X0;

    ui->output_x->setText(QString::number(result_x));
    ui->output_y->setText(QString::number(result_y));
}

// use to display the window of About
void MainWindow::displayAbout()
{
    this->aboutWin.show();
}
