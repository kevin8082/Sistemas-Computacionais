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
    double soma = 0;

    ui->lwSoma->clear();

    if (ui->cbArroz->isChecked()){
        ui->lwSoma->addItem("R$ 2.40");
        soma += 2.40;
    }

    if (ui->cbLeita->isChecked()){
        ui->lwSoma->addItem("R$ 2.70");
        soma += 2.70;
    }

    if (ui->cbCarne->isChecked()){
        ui->lwSoma->addItem("R$ 18.90");
        soma += 18.90;
    }

    if (ui->cbCoca_Cola->isChecked()){
        ui->lwSoma->addItem("R$ 4.50");
        soma += 4.50;
    }

    ui->lwSoma->addItem("----------");
    ui->lwSoma->addItem("R$ " + QString::number(soma,'f',2));
}
