#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMath"
#include <sstream>

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

    int a= ui->lineEdita->text().split(" ")[0].toInt();
    int b= ui->lineEditb->text().split(" ")[0].toInt();
    int c= ui->lineEditc->text().split(" ")[0].toInt();
    if (a==0){
        ui->labelmessage->setText("only one root");
        ui->labelx1res->setText(QString::number(-c/b));
        ui->labelx2res->setText(QString::number(-c/b));
    }
    else{
        if(b==0 && c==0){
            ui->labelmessage->setText("bad arguments");
            return;
        }
        int disc = b*b -4*a*c;
        if (disc>0){
            ui->labelx1res->setText(QString::number((qSqrt(disc) -b)/2*a));
            ui->labelx2res->setText(QString::number((-qSqrt(disc) -b)/2*a));
        }
        else if(disc==0){
             ui->labelmessage->setText("only one root");
             ui->labelx1res->setText(QString::number((qSqrt(disc) -b)/2*a));
             ui->labelx2res->setText(QString::number(-(qSqrt(disc) -b)/2*a));
        }
        else{
            ui->labelmessage->setText("complex roots");
            ui->labelx1res->setText('('+QString::number(qSqrt(-disc))+'i'+ QString::number(-b)+')'+'/'+QString::number(2*a));
            ui->labelx2res->setText('('+QString::number(-qSqrt(-disc))+'i'+ QString::number(-b)+')'+'/'+QString::number(2*a));

        }
    }
}
