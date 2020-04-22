#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

/*实时获取时间  声明 槽timerUpdate 和任何对象都可将信号与之相连接*/
public slots:
    void timerUpdate(void);

};

#endif // MAINWINDOW_H
