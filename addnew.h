#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class addNew;
}

class addNew : public QDialog
{
    Q_OBJECT

public:
    explicit addNew(QWidget *parent = 0);
    ~addNew();

private slots:
    void on_selectSpeech_clicked();

    void on_selectApp_clicked();

    void on_selectIcon_clicked();

private:
    Ui::addNew *ui;
};

#endif // ADDNEW_H
