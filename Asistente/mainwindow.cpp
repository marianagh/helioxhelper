#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boton.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QIcon>

Boton *boton;
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
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir Archivo"), QString(), tr("Archivos de Audio (*.ogg *.mp3)"));

    if (!fileName.isEmpty()) {
        QFile file (fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("No se puede abrir el archivo."));
            return;
        }
        QTextStream in(&fileName);
        boton->setAudio(fileName);
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
        boton->setAplicacionRuta(programName);
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
        boton->setIcono(QIcon::QIcon( iconName));
        ui->appIcon->setText(in.readAll());
        file.close();
    }
}

void MainWindow::on_buttonBox_accepted()
{
boton->setNombre(ui->appName->text());
boton->setDescripcion(ui->appDescription->toPlainText());
boton->setLenguaje(ui->comboBox->currentText());
QMessageBox::information(this, tr("Exito"), tr("Se ha gregado."));
return;
}
