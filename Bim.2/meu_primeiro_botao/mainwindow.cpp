#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pbCalcular->setText("Calcular");
    ui->pbCalcular->setToolTip("Apertando esta bosta vai somar as duas bostas que você digito");
    ui->tlNum1->setText("Número 1");
    ui->tlNum2->setText("Número 2");
    ui->tlSoma->setText("Resposta:");
    ui->tlResposta->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbCalcular_clicked()
{
    int v1,v2,resp;
    v1 = ui->leNum1->text().toInt();
    v2 = ui->leNum2->text().toInt();

    resp = v1 + v2;

    ui->tlResposta->setNum(resp);
}
