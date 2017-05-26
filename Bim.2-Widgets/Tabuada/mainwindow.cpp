#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbCalc_clicked()
{
    ui->lwTabuada->clear();
    QString tmp_txt;
    double entrada;
    entrada = ui->leNum->text().toDouble();
    for (int i = 1; i <= 10;i++) {
        tmp_txt= QString::number(entrada) + " x " + QString::number(i) + " = " + QString::number((entrada * i));
        ui->lwTabuada->addItem(tmp_txt);
    }
}
