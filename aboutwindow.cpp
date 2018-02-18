/******************************************************************************
 * aboutwindow.cpp - OptimizationCounter
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
#include "aboutwindow.h"
#include "ui_aboutwindow.h"

aboutWindow::aboutWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aboutWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("About");
}

aboutWindow::~aboutWindow()
{
    delete ui;
}
