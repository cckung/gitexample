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

void MainWindow::on_pushButton_clicked()
{
    ui->lcdNumber->display(15.5);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->append(ui->lineEdit->text());
            //apend like cout的意思將Lineedit上打的東西傳到textbrowser
    ui->lineEdit->clear();
}

void MainWindow::on_pushbotton_changelabel_clicked()
{
    ui->label->setText("5566");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser_2->append(ui->listWidget->currentItem()->text());
    //將listwidget的東西(3)丟到textbrowser，currentitem為在listwidget上所選的東西(3)
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser_3->clear();
    if(ui->checkBox->isChecked())
        ui->textBrowser_3->append(ui->checkBox->text());
    if(ui->checkBox_2->isChecked())
        ui->textBrowser_3->append(ui->checkBox_2->text());
    if(ui->checkBox_3->isChecked())
        ui->textBrowser_3->append(ui->checkBox_3->text());
}
