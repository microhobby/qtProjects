#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void button_click(void);
    void button_dbclick(void);

private:
    Ui::MainWindow *ui;
    void addSignals(void);
};

#endif // MAINWINDOW_H
