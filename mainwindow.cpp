#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    licznik = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_action_klos_triggered()
{
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    licznik++; // ja kiedy redundancja
    // mordeczkko masz ohote na odczyn kartezjanski ??!
    ui->label_2->setText(QString::number(licznik));
}

