/******************************************************************************
 * main.cpp - OptimizationCounter
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
#include "aboutwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
