/********************************************************************************
** Form generated from reading UI file 'employeform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEFORM_H
#define UI_EMPLOYEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeForm
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leSearch;
    QPushButton *pbSearch;
    QFrame *line;
    QWidget *widget;
    QListWidget *lwEmployes;
    QPushButton *pbReturnClear;
    QPushButton *pbClearSupp;
    QPushButton *pbAjoutMod;

    void setupUi(QWidget *EmployeForm)
    {
        if (EmployeForm->objectName().isEmpty())
            EmployeForm->setObjectName(QString::fromUtf8("EmployeForm"));
        EmployeForm->resize(502, 398);
        gridLayout = new QGridLayout(EmployeForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leSearch = new QLineEdit(EmployeForm);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));

        gridLayout->addWidget(leSearch, 0, 0, 1, 1);

        pbSearch = new QPushButton(EmployeForm);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));

        gridLayout->addWidget(pbSearch, 0, 1, 1, 1);

        line = new QFrame(EmployeForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 3, 1);

        widget = new QWidget(EmployeForm);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 3, 2, 3);

        lwEmployes = new QListWidget(EmployeForm);
        lwEmployes->setObjectName(QString::fromUtf8("lwEmployes"));

        gridLayout->addWidget(lwEmployes, 1, 0, 2, 2);

        pbReturnClear = new QPushButton(EmployeForm);
        pbReturnClear->setObjectName(QString::fromUtf8("pbReturnClear"));

        gridLayout->addWidget(pbReturnClear, 2, 3, 1, 1);

        pbClearSupp = new QPushButton(EmployeForm);
        pbClearSupp->setObjectName(QString::fromUtf8("pbClearSupp"));

        gridLayout->addWidget(pbClearSupp, 2, 4, 1, 1);

        pbAjoutMod = new QPushButton(EmployeForm);
        pbAjoutMod->setObjectName(QString::fromUtf8("pbAjoutMod"));

        gridLayout->addWidget(pbAjoutMod, 2, 5, 1, 1);


        retranslateUi(EmployeForm);

        QMetaObject::connectSlotsByName(EmployeForm);
    } // setupUi

    void retranslateUi(QWidget *EmployeForm)
    {
        EmployeForm->setWindowTitle(QApplication::translate("EmployeForm", "Form", 0, QApplication::UnicodeUTF8));
        leSearch->setText(QString());
        leSearch->setPlaceholderText(QApplication::translate("EmployeForm", "Rechercher", 0, QApplication::UnicodeUTF8));
        pbSearch->setText(QApplication::translate("EmployeForm", "Chercher", 0, QApplication::UnicodeUTF8));
        pbReturnClear->setText(QApplication::translate("EmployeForm", "Retour", 0, QApplication::UnicodeUTF8));
        pbClearSupp->setText(QApplication::translate("EmployeForm", "Clear", 0, QApplication::UnicodeUTF8));
        pbAjoutMod->setText(QApplication::translate("EmployeForm", "Ajouter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmployeForm: public Ui_EmployeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEFORM_H
