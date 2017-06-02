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

void MainWindow::on_pbCalcular_Reajuste_clicked()
{
    double reajuste,salario;
    salario = ui->leSalario_Atual->text().toDouble();

    if (ui->rb5->isChecked()) {
        reajuste = salario * 1.05;
    }

    if (ui->rb12->isChecked()) {
        reajuste = salario * 1.125;
    }

    if (ui->rb15->isChecked()) {
        reajuste = salario * 1.15;
    }

    ui->leSalario_Reajustado->setText(QString::number(reajuste));
}
