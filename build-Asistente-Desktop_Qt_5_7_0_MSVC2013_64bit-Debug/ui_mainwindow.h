/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalir;
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *selectApp;
    QLabel *labelLanguage;
    QLineEdit *appNameExe;
    QLabel *labelSpeech;
    QLineEdit *speechName;
    QLabel *labelApp;
    QComboBox *comboBox;
    QPushButton *selectSpeech;
    QLabel *labelIcon;
    QLineEdit *appIcon;
    QPushButton *selectIcon;
    QLabel *labelAppName;
    QLineEdit *appName;
    QLabel *labelAppDescription;
    QTextEdit *appDescription;
    QDialogButtonBox *buttonBox;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(619, 423);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 20, 581, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        selectApp = new QPushButton(frame);
        selectApp->setObjectName(QStringLiteral("selectApp"));
        selectApp->setGeometry(QRect(460, 190, 99, 27));
        labelLanguage = new QLabel(frame);
        labelLanguage->setObjectName(QStringLiteral("labelLanguage"));
        labelLanguage->setGeometry(QRect(50, 120, 67, 17));
        appNameExe = new QLineEdit(frame);
        appNameExe->setObjectName(QStringLiteral("appNameExe"));
        appNameExe->setGeometry(QRect(130, 190, 301, 27));
        labelSpeech = new QLabel(frame);
        labelSpeech->setObjectName(QStringLiteral("labelSpeech"));
        labelSpeech->setGeometry(QRect(30, 160, 81, 17));
        speechName = new QLineEdit(frame);
        speechName->setObjectName(QStringLiteral("speechName"));
        speechName->setGeometry(QRect(130, 150, 301, 27));
        labelApp = new QLabel(frame);
        labelApp->setObjectName(QStringLiteral("labelApp"));
        labelApp->setGeometry(QRect(30, 200, 81, 20));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 120, 301, 27));
        selectSpeech = new QPushButton(frame);
        selectSpeech->setObjectName(QStringLiteral("selectSpeech"));
        selectSpeech->setGeometry(QRect(460, 150, 99, 27));
        labelIcon = new QLabel(frame);
        labelIcon->setObjectName(QStringLiteral("labelIcon"));
        labelIcon->setGeometry(QRect(40, 230, 81, 20));
        appIcon = new QLineEdit(frame);
        appIcon->setObjectName(QStringLiteral("appIcon"));
        appIcon->setGeometry(QRect(130, 230, 301, 27));
        selectIcon = new QPushButton(frame);
        selectIcon->setObjectName(QStringLiteral("selectIcon"));
        selectIcon->setGeometry(QRect(460, 230, 99, 27));
        labelAppName = new QLabel(frame);
        labelAppName->setObjectName(QStringLiteral("labelAppName"));
        labelAppName->setGeometry(QRect(30, 20, 67, 17));
        appName = new QLineEdit(frame);
        appName->setObjectName(QStringLiteral("appName"));
        appName->setGeometry(QRect(130, 20, 301, 27));
        labelAppDescription = new QLabel(frame);
        labelAppDescription->setObjectName(QStringLiteral("labelAppDescription"));
        labelAppDescription->setGeometry(QRect(10, 70, 91, 17));
        appDescription = new QTextEdit(frame);
        appDescription->setObjectName(QStringLiteral("appDescription"));
        appDescription->setGeometry(QRect(130, 60, 301, 51));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(440, 340, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        selectApp->setText(QApplication::translate("MainWindow", "Seleccionar", 0));
        labelLanguage->setText(QApplication::translate("MainWindow", "Lengua", 0));
        labelSpeech->setText(QApplication::translate("MainWindow", "Grabacion", 0));
        labelApp->setText(QApplication::translate("MainWindow", "Aplicacion", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Maya", 0)
         << QApplication::translate("MainWindow", "Yaqui", 0)
         << QApplication::translate("MainWindow", "Nahuatl", 0)
        );
        selectSpeech->setText(QApplication::translate("MainWindow", "Seleccionar", 0));
        labelIcon->setText(QApplication::translate("MainWindow", "Icono", 0));
        selectIcon->setText(QApplication::translate("MainWindow", "Seleccionar", 0));
        labelAppName->setText(QApplication::translate("MainWindow", "Nombre", 0));
        labelAppDescription->setText(QApplication::translate("MainWindow", "Descripcion", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
