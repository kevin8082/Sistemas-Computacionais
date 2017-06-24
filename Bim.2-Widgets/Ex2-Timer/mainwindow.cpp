#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTimer()
{
    if(counter != 101){
        ui->progressBar->setValue(counter);
    }
    counter++;
    if(counter > 100){
        counter = 0;
    }
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if (ui->spinBox->value() > 0){
        timer->setInterval(1000 / ui->spinBox->value());
        timer->start();
    }

    if (ui->spinBox->value() == 0){
        timer->stop();
    }
}
