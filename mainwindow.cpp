#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMovie>
#include <QTimer>
#include <QDateTime>

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



    /*显示向上向下功能*/
    QMovie *movie_prompt = new QMovie(":/gif/prompt.gif");  //播放资源文件 gif 路径的prompt.gif
    ui->prompt->setMovie(movie_prompt);                     //指定数据显示在prompt控件上面
    movie_prompt->start();                                  //开始播放

    /*实时获取时间 新建一个定时器*/
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));//信号槽timer与timerUpdate相连接
    timer->start(1000);//1000ms刷新一次

}

/*实时获取时间 把时间显示在Qlabel上面*/
void MainWindow::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();//获取系统时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");//显示时间格式
    ui->time->setText(str);//将时间显示在time这个Qlabel上面
}


MainWindow::~MainWindow()
{
    delete ui;
}
