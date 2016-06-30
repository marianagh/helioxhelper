/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addNew
{
public:
    QPushButton *saveLanguage;
    QPushButton *cancel;
    QFrame *frame;
    QPushButton *selectApp;
    QLabel *labelLanguage;
    QLineEdit *appName;
    QLabel *labelSpeech;
    QLineEdit *speechName;
    QLabel *labelApp;
    QComboBox *comboBox;
    QPushButton *selectSpeech;
    QLabel *labelIcon;
    QLineEdit *appIcon;
    QPushButton *selectIcon;
    QLabel *labelAppName;
    QLineEdit *speechName_2;
    QLabel *labelAppDescription;
    QTextEdit *textEdit;

    void setupUi(QDialog *addNew)
    {
        if (addNew->objectName().isEmpty())
            addNew->setObjectName(QString::fromUtf8("addNew"));
        addNew->resize(669, 436);
        saveLanguage = new QPushButton(addNew);
        saveLanguage->setObjectName(QString::fromUtf8("saveLanguage"));
        saveLanguage->setGeometry(QRect(450, 390, 99, 27));
        cancel = new QPushButton(addNew);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(550, 390, 99, 27));
        frame = new QFrame(addNew);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 50, 581, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        selectApp = new QPushButton(frame);
        selectApp->setObjectName(QString::fromUtf8("selectApp"));
        selectApp->setGeometry(QRect(460, 190, 99, 27));
        labelLanguage = new QLabel(frame);
        labelLanguage->setObjectName(QString::fromUtf8("labelLanguage"));
        labelLanguage->setGeometry(QRect(50, 120, 67, 17));
        appName = new QLineEdit(frame);
        appName->setObjectName(QString::fromUtf8("appName"));
        appName->setGeometry(QRect(130, 190, 301, 27));
        labelSpeech = new QLabel(frame);
        labelSpeech->setObjectName(QString::fromUtf8("labelSpeech"));
        labelSpeech->setGeometry(QRect(30, 160, 71, 17));
        speechName = new QLineEdit(frame);
        speechName->setObjectName(QString::fromUtf8("speechName"));
        speechName->setGeometry(QRect(130, 150, 301, 27));
        labelApp = new QLabel(frame);
        labelApp->setObjectName(QString::fromUtf8("labelApp"));
        labelApp->setGeometry(QRect(30, 200, 81, 20));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(130, 120, 301, 27));
        selectSpeech = new QPushButton(frame);
        selectSpeech->setObjectName(QString::fromUtf8("selectSpeech"));
        selectSpeech->setGeometry(QRect(460, 150, 99, 27));
        labelIcon = new QLabel(frame);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        labelIcon->setGeometry(QRect(40, 230, 81, 20));
        appIcon = new QLineEdit(frame);
        appIcon->setObjectName(QString::fromUtf8("appIcon"));
        appIcon->setGeometry(QRect(130, 230, 301, 27));
        selectIcon = new QPushButton(frame);
        selectIcon->setObjectName(QString::fromUtf8("selectIcon"));
        selectIcon->setGeometry(QRect(460, 230, 99, 27));
        labelAppName = new QLabel(frame);
        labelAppName->setObjectName(QString::fromUtf8("labelAppName"));
        labelAppName->setGeometry(QRect(30, 20, 67, 17));
        speechName_2 = new QLineEdit(frame);
        speechName_2->setObjectName(QString::fromUtf8("speechName_2"));
        speechName_2->setGeometry(QRect(130, 20, 301, 27));
        labelAppDescription = new QLabel(frame);
        labelAppDescription->setObjectName(QString::fromUtf8("labelAppDescription"));
        labelAppDescription->setGeometry(QRect(10, 70, 91, 17));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 60, 301, 51));

        retranslateUi(addNew);

        QMetaObject::connectSlotsByName(addNew);
    } // setupUi

    void retranslateUi(QDialog *addNew)
    {
        addNew->setWindowTitle(QApplication::translate("addNew", "Dialog", 0, QApplication::UnicodeUTF8));
        saveLanguage->setText(QApplication::translate("addNew", "Guardar", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("addNew", "Cancelar", 0, QApplication::UnicodeUTF8));
        selectApp->setText(QApplication::translate("addNew", "Seleccionar", 0, QApplication::UnicodeUTF8));
        labelLanguage->setText(QApplication::translate("addNew", "Lengua", 0, QApplication::UnicodeUTF8));
        labelSpeech->setText(QApplication::translate("addNew", "Grabacion", 0, QApplication::UnicodeUTF8));
        labelApp->setText(QApplication::translate("addNew", "Aplicacion", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addNew", "Maya", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addNew", "Yaqui", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addNew", "Nahuatl", 0, QApplication::UnicodeUTF8)
        );
        selectSpeech->setText(QApplication::translate("addNew", "Seleccionar", 0, QApplication::UnicodeUTF8));
        labelIcon->setText(QApplication::translate("addNew", "Icono", 0, QApplication::UnicodeUTF8));
        selectIcon->setText(QApplication::translate("addNew", "Seleccionar", 0, QApplication::UnicodeUTF8));
        labelAppName->setText(QApplication::translate("addNew", "Nombre", 0, QApplication::UnicodeUTF8));
        labelAppDescription->setText(QApplication::translate("addNew", "Descripcion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addNew: public Ui_addNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
