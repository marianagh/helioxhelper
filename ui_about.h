/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_14;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(647, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(about);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_2 = new QFrame(about);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(68, 68));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/trayicon.png")));
        label->setScaledContents(true);

        gridLayout_2->addWidget(label, 1, 1, 2, 1);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 5);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 3, 1, 1);

        tabWidget = new QTabWidget(frame_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(148, 100));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/inali.png")));
        label_10->setScaledContents(false);
        label_10->setWordWrap(true);

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(183, 100));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/SSCYDC.png")));

        horizontalLayout->addWidget(label_11);


        gridLayout->addWidget(frame, 5, 0, 1, 2);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_9, 4, 0, 1, 2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_8, 3, 0, 1, 2);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(8);
        font2.setItalic(true);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(16777215, 40));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_13->setFont(font3);

        gridLayout_4->addWidget(label_13, 0, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(16777215, 40));
        label_14->setFont(font3);

        gridLayout_4->addWidget(label_14, 1, 1, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 1, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 4, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(about);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QApplication::translate("about", "About Heliox Acceso", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("about", "Heliox Acceso", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("about", "Linguist Accessibility Tool", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_11->setText(QString());
        label_9->setText(QApplication::translate("about", "Financed through Convenio INALI/UNAM ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("about", "Design:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("about", "<html><head/><body><p>Promovido por el INALI: Instituto de Lenguas Ind\303\255genas Mexicanas - <a href=\"http://www.inali.gob.mx\"><span style=\" text-decoration: underline; color:#0057ae;\">www.inali.gob.mx</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("about", "<html><head/><body><p>Roberto Feltrero  -  Adonay Sanz \302\267 <a href=\"http://www.proyectoheliox.org\"><span style=\" text-decoration: underline; color:#0057ae;\">www.proyectoheliox.org</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("about", "<html><head/><body><p>This software is distributed under <a href=\"http://www.gnu.org/licenses/gpl-3.0.html\"><span style=\" text-decoration: underline; color:#0057ae;\">GNU/GPL 3</span></a> or higher license terms.</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("about", "Credits", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("about", "Maya:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("about", "Karina Puc Balam", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("about", "Nahuatl:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("about", "Fausto Aguilar Dom\303\255nguez", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("about", "Translation and Voices", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
