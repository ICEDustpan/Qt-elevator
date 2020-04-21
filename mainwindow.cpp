#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}
