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
    double nota1,nota2,sub,media;

    nota1 = ui->leNota1->text().toDouble();
    nota2 = ui->leNota2->text().toDouble();
    sub = ui->leSub->text().toDouble();

    if (nota1 < nota2){
        nota1 = sub;
    } else if (nota2 < nota1){
        nota2 = sub;
    }

    if (nota1 == nota2){
        if (nota1 < sub){
            nota1 = sub;
        }
    }

    media = (nota1 + nota2) / 2.0;

    ui->leMedia->setText(QString::number(media));
}
