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

void MainWindow::on_pbVeltoPace_clicked()
{
    double vel,pace;
    vel = ui->leVelocidade->text().toDouble();
    pace = 60.0 / vel;

    ui->lePace->setText(QString::number(pace));
}

void MainWindow::on_pbPacetoVel_clicked()
{
    double vel,pace;
    pace = ui->lePace->text().toDouble();
    vel = 60.0 / pace;

    ui->leVelocidade->setText(QString::number(vel));
}
