#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->addSignals();

    /* maximized */
    //QWidget::showMaximized();

    /* centralized */

}

void MainWindow::addSignals()
{
    QObject::connect(this->ui->pushButton, SIGNAL(clicked()), this, SLOT(button_click()));
    QObject::connect(this->ui->pushButton, SIGNAL(doubleClicked()), this, SLOT(button_dbclick()));
}

void MainWindow::button_click()
{
    this->ui->label->setText("Hello Wordl!");
    cout << "CLICKED" << endl;
}

void MainWindow::button_dbclick()
{
    this->ui->label->setText("This is a double click!");
    cout << "DOUBLE CLICKED" << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
