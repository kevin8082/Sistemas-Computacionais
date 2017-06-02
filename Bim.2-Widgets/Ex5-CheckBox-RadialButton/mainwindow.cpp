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

void MainWindow::on_pbCalcular_clicked()
{
    double valor1,valor2,resultado = 0;

    valor1 = ui->leValor1->text().toDouble();
    valor2 = ui->leValor2->text().toDouble();

    if (ui->rbAdicao->isChecked()){
        resultado = valor1 + valor2;
    }

    if (ui->rbSubtracao->isChecked()){
        resultado = valor1 - valor2;
    }

    if (ui->rbMutiplicacao->isChecked()){
        resultado = valor1 * valor2;
    }

    if (ui->rbDivisao->isChecked()){
        resultado = valor1 / valor2;
    }

    ui->leResultado->setText(QString::number(resultado));
}
