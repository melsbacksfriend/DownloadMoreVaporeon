#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>
#include <thread>

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
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
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
}
