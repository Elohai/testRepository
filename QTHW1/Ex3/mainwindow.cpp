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

void MainWindow::on_pushButton_copy_clicked()
{
    ui->plainTextEdit_reciever->appendPlainText(ui->plainTextEdit_source->toPlainText());
}

void MainWindow::on_pushButton_replace_clicked()
{
    ui->plainTextEdit_reciever->setPlainText(ui->plainTextEdit_source->toPlainText());
}

void MainWindow::on_pushButton_html_clicked()
{
    ui->plainTextEdit_reciever->setPlainText(""); //что то пошло не так, я не нашел в документации метод setHtml для QPlainTextEdit, пришлось мастерить костыль
    ui->plainTextEdit_reciever->appendHtml("<font color='red'>"+ui->plainTextEdit_source->toPlainText()+"</font>");
}
