#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <task.h>

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

void MainWindow::on_pushButton_clicked()
{
    int r = ui->plainTextEdit_3->toPlainText().toDouble();
    int N = ui->plainTextEdit_2->toPlainText().toDouble();
    double p = ui->plainTextEdit->toPlainText().toDouble();
    Task T(r, N, p);
    QTableWidgetItem *item = new QTableWidgetItem();
    ui->tableWidget->setRowCount(3*r - 2);
    double n = 0;

    for (int i = 0; i < 3*r - 2; i++)
    {
        item = new QTableWidgetItem(QString::number(i+3));
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::number(T.v[i]));
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::number((double)T.v[i] / (double)N));
        ui->tableWidget->setItem(i, 2, item);
        n += (double)T.v[i] / (double)N;
    }
    ui->label_4->setText(QString::number(n));
}
