#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QTimer * timer;

private slots:
    void on_pbStart_clicked();

    void on_pbStop_clicked();

    void on_pbReset_clicked();

    void updateTimer();

private:
    Ui::MainWindow *ui;
    int counter = 0;
};

#endif // MAINWINDOW_H
