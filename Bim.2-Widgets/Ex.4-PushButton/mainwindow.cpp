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

void MainWindow::on_pcFtoC_clicked()
{
    double F,C;
    F = ui->lnFahrenheitEntrada->text().toDouble();
    C = (5.0/9.0)*(F - 32);
    ui->lnCelsiusEntrada->setText(QString::number(C));
}

void MainWindow::on_pbCtoF_clicked()
{
    double C,F;
    C = ui->lnCelsiusEntrada->text().toDouble();
    F = (9.0/5.0)*(C + 32);
    ui->lnFahrenheitEntrada->setText(QString::number(F));
}
