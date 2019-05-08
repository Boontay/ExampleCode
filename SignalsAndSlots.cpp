// coin.cpp

#include "coin.h"

Coin::Coin
{
    srand(time(0));
}

void Coin::flip()
{
    if (rand() % 2)
    {
        emit this->heads();
    }
    else
    {
        emit tails();
    }
}















// coin.h

#ifndef COIN_H
#define COIN_H

#include <QObject>

class Coin : public QObject
{
public:
    Coin();
    void flip();

signals:
    void heads();
    void tails();
};

#endif














// main.cpp

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}















// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new UI::MainWindow)
{
    ui->setupUi(this);

    connect(&coin, SIGNAL(heads()), this, SLOT(onHeads()));
    connect(&coin, SIGNAL(tails()), this, SLOT(onTails()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onHeads()
{
    ui->textEdit->append("Heads");
}

void MainWindow::onTails()
{
    ui->textEdit->append("Tails");
}















// mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace UI {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void onHeads();
    void onTails();

private:
    Coin coin;
};

#endif
