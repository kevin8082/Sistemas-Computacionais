#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lwTemperatura->addItem("Celsius -> Fahrenheit");
    ui->lwTemperatura->addItem("Fahrenheit -> Celsius");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbConverte_clicked()
{
    QString tmp;
    double F,C;
    if (ui->lwTemperatura->currentRow() == 0) {
        C = ui->leTemperatura->text().toDouble();
        F = (1.8 * C) + 32;
        ui->tlConverte->setText(QString::number(F));
    } else if (ui->lwTemperatura->currentRow() == 1) {
               F = ui->leTemperatura->text().toDouble();
               C = (F - 32) / 1.8;
               ui->tlConverte->setText(QString::number(C));
    } else {
        QMessageBox msg;
        msg.setText("Selecione um item da lista.");
        msg.exec();
    }
}
