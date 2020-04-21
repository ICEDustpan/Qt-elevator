#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);


    /*显示楼层功能*/
    QMovie *movie_number = new QMovie(":/gif/number.gif");  //播放资源文件 gif 路径的number.gif
    ui->number->setMovie(movie_number);                     //指定数据显示在number控件上面
    movie_number->start();                                  //开始播放

}

MainWindow::~MainWindow()
{
    delete ui;
}
