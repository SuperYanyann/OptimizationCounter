/******************************************************************************
 * aboutwindow.h - OptimizationCounter
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
#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QWidget>

namespace Ui {
class aboutWindow;
}

class aboutWindow : public QWidget
{
    Q_OBJECT

public:
    explicit aboutWindow(QWidget *parent = 0);
    ~aboutWindow();

private:
    Ui::aboutWindow *ui;
};

#endif // ABOUTWINDOW_H
