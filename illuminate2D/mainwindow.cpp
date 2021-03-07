#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "opencv.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot_openCV()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_openCV(){
    OpenCV cv = OpenCV();
    cv.openImg("/Users/ashleyalexander-lee/Downloads/test3.png");
}
