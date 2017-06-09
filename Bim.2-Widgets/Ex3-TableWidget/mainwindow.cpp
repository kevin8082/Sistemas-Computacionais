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
    double calculo = 0;
    ui->lwCalculos->clear();
    for (int i = 0; i < 5;i++) {
        calculo = 0;
        for (int j = 0; j < 3;j++) {
            if (ui->twTabela->item(i,j) != NULL) {
                calculo += ui->twTabela->item(i,j)->text().toDouble();
            }
        }
        ui->lwCalculos->addItem(QString::number(calculo));
    }
}
