#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>
#include <thread>
#include <QMovie>

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
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 2));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 4));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 8));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_5_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 16));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_6_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 69));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_7_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 100));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_8_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 200));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_9_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/vaporeon/giphy.gif");
    ui->label_10->setMovie(movie);
    ui->label_11->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_9->setText("Initializing Vaporeon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
        if (i == 25)
        {
            ui->label_9->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_9->setText("Obtaining Water Stone...");
        }
        if (i == 75)
        {
            ui->label_9->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 360));
    }
    ui->label_9->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_16_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_11_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 2));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_17_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 4));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_12_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 8));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_13_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 16));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_15_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 69));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_14_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 100));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_10_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 200));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}

void MainWindow::on_pushButton_18_clicked()
{
    QMovie *movie = new QMovie(":/img/icon/sylveon/giphy-1.gif");
    ui->label_20->setMovie(movie);
    ui->label_23->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->label_22->setText("Initializing Sylveon...");
    for (int i = 0; i <= 100; i++)
    {
        ui->progressBar_2->setValue(i);
        if (i == 25)
        {
            ui->label_22->setText("Obtaining Eevee...");
        }
        if (i == 50)
        {
            ui->label_22->setText("Obtaining Affection\nand Fairy-Type moves...");
        }
        if (i == 75)
        {
            ui->label_22->setText("Almost there...");
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * 360));
    }
    ui->label_22->setText("Download complete!!!!!111111");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
}
