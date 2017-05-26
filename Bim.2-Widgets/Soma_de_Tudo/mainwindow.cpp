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

void MainWindow::on_pbAdiciona_clicked()
{
    QString tmp;
    tmp = ui->leNumero->text();
    ui->lwNumeros->addItem(tmp);
    ui->leNumero->setText("");
}

void MainWindow::on_pbTotal_clicked()
{;
    double tmp_num;
    for (int i = 0; i < ui->lwNumeros->count();i++){
        tmp_num += ui->lwNumeros->item(i)->text().toInt();
    }
    ui->tlTotal->setText(QString::number(tmp_num));
}
