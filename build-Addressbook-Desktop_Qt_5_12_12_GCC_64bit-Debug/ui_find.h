/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Find
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *findok;
    QSpacerItem *horizontalSpacer;
    QPushButton *findback;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *findresult;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Find)
    {
        if (Find->objectName().isEmpty())
            Find->setObjectName(QString::fromUtf8("Find"));
        Find->resize(500, 642);
        gridLayout_2 = new QGridLayout(Find);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        findok = new QPushButton(Find);
        findok->setObjectName(QString::fromUtf8("findok"));
        findok->setMinimumSize(QSize(100, 100));
        findok->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/find.png);"));

        horizontalLayout->addWidget(findok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        findback = new QPushButton(Find);
        findback->setObjectName(QString::fromUtf8("findback"));
        findback->setMinimumSize(QSize(100, 100));
        findback->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/return.png);"));

        horizontalLayout->addWidget(findback);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Find);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 50));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(Find);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 40));
        QFont font1;
        font1.setPointSize(18);
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        findresult = new QLabel(Find);
        findresult->setObjectName(QString::fromUtf8("findresult"));
        findresult->setMinimumSize(QSize(200, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(20);
        findresult->setFont(font2);

        verticalLayout_2->addWidget(findresult);

        listWidget = new QListWidget(Find);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(400, 350));

        verticalLayout_2->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 2, 1, 1);


        retranslateUi(Find);

        QMetaObject::connectSlotsByName(Find);
    } // setupUi

    void retranslateUi(QDialog *Find)
    {
        Find->setWindowTitle(QApplication::translate("Find", "Dialog", nullptr));
        findok->setText(QString());
        findback->setText(QString());
        label->setText(QApplication::translate("Find", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\237\245\346\211\276\344\270\213\351\235\242\347\232\204\345\205\263\351\224\256\345\255\227\357\274\232</span></p></body></html>", nullptr));
        findresult->setText(QApplication::translate("Find", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Find: public Ui_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
