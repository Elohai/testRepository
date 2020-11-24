#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMath"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_d->toggle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a= ui->lineEdit_a->text().split(" ")[0].toDouble();
    double b= ui->lineEdit_b->text().split(" ")[0].toDouble();
    double angle = ui->lineEdit_angle->text().split(" ")[0].toDouble();
    //double angle = qDegreesToRadians(angle);
    if(ui->radioButton_d->isChecked()){
        angle = angle*M_PI/180;    //мне привычнее переводить в радианы таким образом, я полагаю, что функция выше производит те же самые действия
    }
    double c = a*a+b*b-2*a*b*qCos(angle); //здесь квадрат, выводить надо корень квадратный из значения
    ui->label_result->setText(QString::number(qSqrt(c)));
}
