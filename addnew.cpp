#include "addnew.h"
#include "ui_addnew.h"

addNew::addNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNew)
{
    ui->setupUi(this);
}

addNew::~addNew()
{
    delete ui;
}

void addNew::on_selectSpeech_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
              tr("Audio File (*.ogg);;"));

      if (!fileName.isEmpty()) {
          QFile file(fileName);
          if (!file.open(QIODevice::ReadOnly)) {
              QMessageBox::critical(this, tr("Error"), tr("No se pudo abrir el archivo"));
              return;
          }
          QTextStream in(&file);
          ui->speechName->setText(fileName);
          file.close();
      }

}

void addNew::on_selectApp_clicked()
{

}

void addNew::on_selectIcon_clicked()
{

}
