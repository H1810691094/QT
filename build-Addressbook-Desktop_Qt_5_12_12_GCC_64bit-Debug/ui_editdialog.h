/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editDialog
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *tellineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *addrlineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *complineEdit;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *editDialog)
    {
        if (editDialog->objectName().isEmpty())
            editDialog->setObjectName(QString::fromUtf8("editDialog"));
        editDialog->resize(500, 600);
        gridLayout_4 = new QGridLayout(editDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_3 = new QSpacerItem(13, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(editDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(400, 60));
        QFont font;
        font.setPointSize(30);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(editDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(400, 60));

        verticalLayout->addWidget(label_6);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(18, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(editDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 60));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        tellineEdit = new QLineEdit(editDialog);
        tellineEdit->setObjectName(QString::fromUtf8("tellineEdit"));
        tellineEdit->setMinimumSize(QSize(150, 60));
        QFont font2;
        font2.setPointSize(15);
        tellineEdit->setFont(font2);

        horizontalLayout_2->addWidget(tellineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(editDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 60));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        addrlineEdit = new QLineEdit(editDialog);
        addrlineEdit->setObjectName(QString::fromUtf8("addrlineEdit"));
        addrlineEdit->setMinimumSize(QSize(150, 60));
        addrlineEdit->setFont(font2);

        horizontalLayout_4->addWidget(addrlineEdit);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(editDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 60));
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(editDialog);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setMinimumSize(QSize(150, 60));
        namelineEdit->setFont(font2);

        horizontalLayout->addWidget(namelineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(editDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 60));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        complineEdit = new QLineEdit(editDialog);
        complineEdit->setObjectName(QString::fromUtf8("complineEdit"));
        complineEdit->setMinimumSize(QSize(150, 60));
        complineEdit->setFont(font2);

        horizontalLayout_3->addWidget(complineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(editDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(250, 60));
        buttonBox->setFont(font1);
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(17, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(editDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), editDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(editDialog);
    } // setupUi

    void retranslateUi(QDialog *editDialog)
    {
        editDialog->setWindowTitle(QApplication::translate("editDialog", "Dialog", nullptr));
        label_5->setText(QApplication::translate("editDialog", "<html><head/><body><p align=\"center\">\344\277\256\346\224\271\350\201\224\347\263\273\344\272\272</p></body></html>", nullptr));
        label_6->setText(QString());
        label_2->setText(QApplication::translate("editDialog", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_4->setText(QApplication::translate("editDialog", "\345\234\260\345\235\200\357\274\232", nullptr));
        label->setText(QApplication::translate("editDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("editDialog", "\345\205\254\345\217\270\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editDialog: public Ui_editDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
