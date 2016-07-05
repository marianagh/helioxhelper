#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

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



void MainWindow::on_selectSpeech_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir Archivo"), QString(), tr("Archivos de Audio (*.ogg)"));

    if (!fileName.isEmpty()) {
        QFile file (fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("No se puede abrir el archivo."));
            return;
        }
        QTextStream in(&fileName);
        ui->speechName->setText(in.readAll());
        file.close();
    }
}


void MainWindow::on_selectApp_clicked()
{
    QString programName = QFileDialog::getOpenFileName(this, tr("Abrir Archivo"), QString(), tr("Archivos Ejecutables (*.sh *.pl *.rb *.bin *.run *.deb)"));

    if (!programName.isEmpty()) {
        QFile file (programName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("No se puede abrir el archivo."));
            return;
        }
        QTextStream in(&programName);
        ui->appNameExe->setText(in.readAll());
        file.close();
    }
}

void MainWindow::on_selectIcon_clicked()
{
    QString iconName = QFileDialog::getOpenFileName(this, tr("Abrir Archivo"), QString(), tr("Archivos de Imagen (*.png)"));

    if (!iconName.isEmpty()) {
        QFile file (iconName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("No se puede abrir el archivo."));
            return;
        }
        QTextStream in(&iconName);
        ui->appNameExe->setText(in.readAll());
        file.close();
}
}
