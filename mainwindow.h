/******************************************************************************
 * mainwindow.h - OptimizationCounter
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
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "aboutwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    aboutWindow aboutWin;

private slots:
    void computeOptimization(); //compute the optimization
    void displayAbout(); //display the about window
};

#endif // MAINWINDOW_H
