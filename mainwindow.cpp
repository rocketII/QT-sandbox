#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->MypushButton_Beta, SIGNAL(clicked()), this, SLOT(openMyDialog()));
    connect(ui->DoNotpushButtonMe, SIGNAL(clicked()), this, SLOT(openMyDialog()));
}
void MainWindow::openMyDialog()
{
    object2myDialog = new myDialog(); //use destructor
    object2myDialog->show();
    //this->hide(); don't really need this pointer here. Hides mainwindow.

}

MainWindow::~MainWindow()
{
    delete object2myDialog;
    delete ui;
}
