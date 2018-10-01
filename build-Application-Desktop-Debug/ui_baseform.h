/********************************************************************************
** Form generated from reading UI file 'baseform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEFORM_H
#define UI_BASEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sbDay;
    QComboBox *sbMonth;
    QSpinBox *sbYear;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *BaseForm)
    {
        if (BaseForm->objectName().isEmpty())
            BaseForm->setObjectName(QString::fromUtf8("BaseForm"));
        BaseForm->resize(348, 253);
        gridLayout = new QGridLayout(BaseForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(BaseForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sbDay = new QSpinBox(BaseForm);
        sbDay->setObjectName(QString::fromUtf8("sbDay"));

        horizontalLayout->addWidget(sbDay);

        sbMonth = new QComboBox(BaseForm);
        sbMonth->setObjectName(QString::fromUtf8("sbMonth"));

        horizontalLayout->addWidget(sbMonth);

        sbYear = new QSpinBox(BaseForm);
        sbYear->setObjectName(QString::fromUtf8("sbYear"));

        horizontalLayout->addWidget(sbYear);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        label_4 = new QLabel(BaseForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 2);

        label = new QLabel(BaseForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(BaseForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(BaseForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(BaseForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(BaseForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(BaseForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(BaseForm);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 5, 0, 1, 2);


        retranslateUi(BaseForm);

        QMetaObject::connectSlotsByName(BaseForm);
    } // setupUi

    void retranslateUi(QWidget *BaseForm)
    {
        BaseForm->setWindowTitle(QApplication::translate("BaseForm", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BaseForm", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BaseForm", "Etat (information supplementaire):", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BaseForm", "Nom:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BaseForm", "Date de Naissance:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BaseForm", "Adresse:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BaseForm: public Ui_BaseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEFORM_H
