/********************************************************************************
** Form generated from reading UI file 'employespwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYESPWIDGET_H
#define UI_EMPLOYESPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeSpWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hlDateEmbau;
    QSpinBox *sbDay;
    QComboBox *sbMonth;
    QSpinBox *sbYear;
    QLabel *lDateEmbau;
    QCheckBox *cbRetraite;
    QLabel *lSalaire;
    QDoubleSpinBox *dsbSalaire;
    QLabel *lSpecial;
    QLineEdit *leSpecial;

    void setupUi(QWidget *EmployeSpWidget)
    {
        if (EmployeSpWidget->objectName().isEmpty())
            EmployeSpWidget->setObjectName(QString::fromUtf8("EmployeSpWidget"));
        EmployeSpWidget->resize(359, 141);
        gridLayout = new QGridLayout(EmployeSpWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        hlDateEmbau = new QHBoxLayout();
        hlDateEmbau->setObjectName(QString::fromUtf8("hlDateEmbau"));
        sbDay = new QSpinBox(EmployeSpWidget);
        sbDay->setObjectName(QString::fromUtf8("sbDay"));
        sbDay->setMaximum(30);

        hlDateEmbau->addWidget(sbDay);

        sbMonth = new QComboBox(EmployeSpWidget);
        sbMonth->setObjectName(QString::fromUtf8("sbMonth"));

        hlDateEmbau->addWidget(sbMonth);

        sbYear = new QSpinBox(EmployeSpWidget);
        sbYear->setObjectName(QString::fromUtf8("sbYear"));
        sbYear->setMaximum(2017);

        hlDateEmbau->addWidget(sbYear);


        gridLayout->addLayout(hlDateEmbau, 3, 2, 1, 1);

        lDateEmbau = new QLabel(EmployeSpWidget);
        lDateEmbau->setObjectName(QString::fromUtf8("lDateEmbau"));

        gridLayout->addWidget(lDateEmbau, 3, 1, 1, 1);

        cbRetraite = new QCheckBox(EmployeSpWidget);
        cbRetraite->setObjectName(QString::fromUtf8("cbRetraite"));

        gridLayout->addWidget(cbRetraite, 4, 1, 1, 2);

        lSalaire = new QLabel(EmployeSpWidget);
        lSalaire->setObjectName(QString::fromUtf8("lSalaire"));

        gridLayout->addWidget(lSalaire, 2, 1, 1, 1);

        dsbSalaire = new QDoubleSpinBox(EmployeSpWidget);
        dsbSalaire->setObjectName(QString::fromUtf8("dsbSalaire"));
        dsbSalaire->setMaximum(9999.99);

        gridLayout->addWidget(dsbSalaire, 2, 2, 1, 1);

        lSpecial = new QLabel(EmployeSpWidget);
        lSpecial->setObjectName(QString::fromUtf8("lSpecial"));

        gridLayout->addWidget(lSpecial, 1, 1, 1, 1);

        leSpecial = new QLineEdit(EmployeSpWidget);
        leSpecial->setObjectName(QString::fromUtf8("leSpecial"));

        gridLayout->addWidget(leSpecial, 1, 2, 1, 1);


        retranslateUi(EmployeSpWidget);

        QMetaObject::connectSlotsByName(EmployeSpWidget);
    } // setupUi

    void retranslateUi(QWidget *EmployeSpWidget)
    {
        EmployeSpWidget->setWindowTitle(QApplication::translate("EmployeSpWidget", "Form", 0, QApplication::UnicodeUTF8));
        lDateEmbau->setText(QApplication::translate("EmployeSpWidget", "Date d'embauche:", 0, QApplication::UnicodeUTF8));
        cbRetraite->setText(QApplication::translate("EmployeSpWidget", "Retraite", 0, QApplication::UnicodeUTF8));
        lSalaire->setText(QApplication::translate("EmployeSpWidget", "Salaire", 0, QApplication::UnicodeUTF8));
        lSpecial->setText(QApplication::translate("EmployeSpWidget", "Specialite:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmployeSpWidget: public Ui_EmployeSpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYESPWIDGET_H
