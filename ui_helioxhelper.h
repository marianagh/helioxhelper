/********************************************************************************
** Form generated from reading UI file 'helioxhelper.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELIOXHELPER_H
#define UI_HELIOXHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelioxHelper
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayoutMainButtons;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFrame *line;

    void setupUi(QWidget *HelioxHelper)
    {
        if (HelioxHelper->objectName().isEmpty())
            HelioxHelper->setObjectName(QString::fromUtf8("HelioxHelper"));
        HelioxHelper->resize(466, 446);
        gridLayout_3 = new QGridLayout(HelioxHelper);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayoutMainButtons = new QGridLayout();
        gridLayoutMainButtons->setSpacing(0);
        gridLayoutMainButtons->setObjectName(QString::fromUtf8("gridLayoutMainButtons"));

        gridLayout_3->addLayout(gridLayoutMainButtons, 0, 0, 1, 1);

        scrollArea = new QScrollArea(HelioxHelper);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {               \n"
"        border: 0px solid #e7e7e7;\n"
"        background:transparent;\n"
"        width:10px;    \n"
"        margin: 0px 0px 0px 0px;\n"
"    }\n"
"    QScrollBar::handle:vertical {\n"
"      /*  background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0  rgb(51,51,51), stop: 0.5 rgb(71,71,71),  stop:1 rgb(51,51,51)); */\n"
"background: #aaa7a5;\n"
"        min-height: 30px; \n"
"        max-height: 60px;  \n"
"border-bottom-left-radius: 5px;\n"
"	border-bottom-right-radius: 5px;\n"
"    border-top-left-radius: 5px;\n"
"	border-top-right-radius: 5px;\n"
"    }\n"
"\n"
"    QScrollBar::add-line:vertical {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"        height: px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"\n"
"    QScrollBar::sub-line:vertical {\n"
"        background: qlineargrad"
                        "ient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"        height: 0px;\n"
"        subcontrol-position: top;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    "));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 466, 439));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 2, 0, 1, 1);

        line = new QFrame(HelioxHelper);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 1);


        retranslateUi(HelioxHelper);

        QMetaObject::connectSlotsByName(HelioxHelper);
    } // setupUi

    void retranslateUi(QWidget *HelioxHelper)
    {
        HelioxHelper->setWindowTitle(QApplication::translate("HelioxHelper", "HelioxHelper", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelioxHelper: public Ui_HelioxHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELIOXHELPER_H
