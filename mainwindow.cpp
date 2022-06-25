#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // добавлять элементы на вкладке "Дизайн" (сбоку). Чтобы туда зайти кликни два раза на mainwindow.ui
    //после того как добавил элементы нужно собрать проект, чтобы они появились в коде


     //обращаться к добавленным элементам через переменную ui

    ui->pushButton->setText("ClickMe");

    ui->label->setText("-");


    //прочитай в книжке, которую я тебе скинул подорбнее про сигналы и слоты , вот пример

    connect(ui->pushButton, &QPushButton::clicked,this,&MainWindow::onClickMe);
//&QPushButton::clicked - означает адрес функции
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClickMe()
{
    lable_number++;
    QString text = QString::number(lable_number); //так переводить число в строку
    ui->label->setText(text);
}

