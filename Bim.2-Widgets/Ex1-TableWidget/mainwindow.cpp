#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pbInserir_clicked()
{
    int linha,coluna;
    QString valor;

    linha = ui->leLinha->text().toInt() - 1;
    coluna = ui->leColuna->text().toInt() - 1;
    valor = ui->leValor->text();

    if ((linha < 0 || linha > 5) || (coluna < 0 || coluna > 2)) {
        QMessageBox msg;
        msg.setText("Valores de linha ou coluna inseridos são inválidos.");
        msg.exec();
    } else {
        ui->twTabela->setItem(linha,coluna, new QTableWidgetItem(valor));
    }
}
