#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("p_1");
    ui->comboBox->addItem("p_2");
    ui->comboBox->addItem("p_3");
    ui->comboBox->addItem("p_4");
    ui->comboBox->addItem("p_5");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    ui->widget->setX(ui->comboBox->currentIndex(), position);
    ui->widget->update();
}

void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
    ui->widget->setY(ui->comboBox->currentIndex(), position);
    ui->widget->update();
}
