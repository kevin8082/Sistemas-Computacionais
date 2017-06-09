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
    int valor;

    valor = ui->leValor->text().toInt();

    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 10;j++) {
            if (i == 0) {
            ui->twTabela->setItem(j,i,new QTableWidgetItem(QString::number(valor)));
            }
            if (i == 1) {
                ui->twTabela->setItem(j,i,new QTableWidgetItem(QString::number(j+1)));
            }
            if (i == 2) {
                ui->twTabela->setItem(j,i,new QTableWidgetItem(QString::number(((j+1)*valor))));
            }
        }
    }
}
