#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_btnSelect_pressed() 
{
    FileSelector selector = FileSelector(this);
    selector.getSelectedFile();
    auto content = selector.readContent();
    FileParser parser = FileParser(content);
    //std::vector<double> numbers = parser.getNumbers();
    std::vector<double> numbers = { -70, -50, 0, 30,  200000 };

    double median = MedianFinder::findMedian(numbers);
    ui->txtOutput->setText(QString::number(median, 'f', 2));
    qInfo() << median;
}