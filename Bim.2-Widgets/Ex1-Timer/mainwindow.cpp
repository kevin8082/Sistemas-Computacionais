#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));

    timer->setInterval(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbStart_clicked()
{
    timer->start();
}

void MainWindow::on_pbStop_clicked()
{
    timer->stop();
}

void MainWindow::on_pbReset_clicked()
{
    counter = 0;
    ui->progressBar->setValue(counter);
    on_pbStart_clicked();
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
