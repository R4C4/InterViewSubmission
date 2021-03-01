#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "fileselector.h"
#include "fileparser.h"

#include <MedianFinder/medianfinder.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_btnSelect_pressed();

private:
    Ui::MainWindow *ui;
    QString content;



};
#endif // MAINWINDOW_H
