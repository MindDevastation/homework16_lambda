#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "student.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::vector <Student> student;
    student.resize(5);
    student.emplace_back("Andrey", "Stop", 4.2);
    student.emplace_back("Alexandr", "Green", 4.3);
    student.emplace_back("Anastasia", "Grey", 3.1);
    student.emplace_back("Dmytriy", "Down", 2.7);
    student.emplace_back("Bogdan", "Delay", 4.4);

    auto max = std::max_element(student.begin(), student.end(), [](Student& a, Student& b){return a.getScore() < b.getScore();});

    ui->label->setText("Name: " + max->getName());
    ui->label_2->setText("Surname: " + max->getSurname());
    ui->label_3->setText("Score: " + QString::number(max->getScore()));

}

