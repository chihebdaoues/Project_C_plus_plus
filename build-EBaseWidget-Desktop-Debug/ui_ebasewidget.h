/********************************************************************************
** Form generated from reading UI file 'ebasewidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EBASEWIDGET_H
#define UI_EBASEWIDGET_H

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

class Ui_EBaseWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leName;
    QLabel *lLastName;
    QLineEdit *leLastName;
    QLabel *LDateNaiss;
    QLabel *lAdresse;
    QLineEdit *leAdresse;
    QLabel *lEtat;
    QPlainTextEdit *pteEtat;
    QHBoxLayout *DateNaissLayout;
    QSpinBox *sbDay;
    QComboBox *sbMonth;
    QSpinBox *sbYear;
    QLabel *lName;

    void setupUi(QWidget *EBaseWidget)
    {
        if (EBaseWidget->objectName().isEmpty())
            EBaseWidget->setObjectName(QString::fromUtf8("EBaseWidget"));
        EBaseWidget->resize(400, 300);
        gridLayout = new QGridLayout(EBaseWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leName = new QLineEdit(EBaseWidget);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 1, 3, 1, 1);

        lLastName = new QLabel(EBaseWidget);
        lLastName->setObjectName(QString::fromUtf8("lLastName"));

        gridLayout->addWidget(lLastName, 2, 1, 1, 1);

        leLastName = new QLineEdit(EBaseWidget);
        leLastName->setObjectName(QString::fromUtf8("leLastName"));

        gridLayout->addWidget(leLastName, 2, 3, 1, 1);

        LDateNaiss = new QLabel(EBaseWidget);
        LDateNaiss->setObjectName(QString::fromUtf8("LDateNaiss"));

        gridLayout->addWidget(LDateNaiss, 3, 1, 1, 1);

        lAdresse = new QLabel(EBaseWidget);
        lAdresse->setObjectName(QString::fromUtf8("lAdresse"));

        gridLayout->addWidget(lAdresse, 4, 1, 1, 1);

        leAdresse = new QLineEdit(EBaseWidget);
        leAdresse->setObjectName(QString::fromUtf8("leAdresse"));

        gridLayout->addWidget(leAdresse, 4, 3, 1, 1);

        lEtat = new QLabel(EBaseWidget);
        lEtat->setObjectName(QString::fromUtf8("lEtat"));

        gridLayout->addWidget(lEtat, 5, 1, 1, 3);

        pteEtat = new QPlainTextEdit(EBaseWidget);
        pteEtat->setObjectName(QString::fromUtf8("pteEtat"));

        gridLayout->addWidget(pteEtat, 6, 1, 1, 3);

        DateNaissLayout = new QHBoxLayout();
        DateNaissLayout->setSpacing(6);
        DateNaissLayout->setObjectName(QString::fromUtf8("DateNaissLayout"));
        sbDay = new QSpinBox(EBaseWidget);
        sbDay->setObjectName(QString::fromUtf8("sbDay"));

        DateNaissLayout->addWidget(sbDay);

        sbMonth = new QComboBox(EBaseWidget);
        sbMonth->setObjectName(QString::fromUtf8("sbMonth"));

        DateNaissLayout->addWidget(sbMonth);

        sbYear = new QSpinBox(EBaseWidget);
        sbYear->setObjectName(QString::fromUtf8("sbYear"));

        DateNaissLayout->addWidget(sbYear);


        gridLayout->addLayout(DateNaissLayout, 3, 3, 1, 1);

        lName = new QLabel(EBaseWidget);
        lName->setObjectName(QString::fromUtf8("lName"));

        gridLayout->addWidget(lName, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        lLastName->setBuddy(leLastName);
        LDateNaiss->setBuddy(sbDay);
        lAdresse->setBuddy(leAdresse);
        lEtat->setBuddy(pteEtat);
        lName->setBuddy(leName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(leName, leLastName);
        QWidget::setTabOrder(leLastName, sbDay);
        QWidget::setTabOrder(sbDay, sbMonth);
        QWidget::setTabOrder(sbMonth, sbYear);
        QWidget::setTabOrder(sbYear, leAdresse);
        QWidget::setTabOrder(leAdresse, pteEtat);

        retranslateUi(EBaseWidget);

        QMetaObject::connectSlotsByName(EBaseWidget);
    } // setupUi

    void retranslateUi(QWidget *EBaseWidget)
    {
        EBaseWidget->setWindowTitle(QApplication::translate("EBaseWidget", "EBaseWidget", 0, QApplication::UnicodeUTF8));
        lLastName->setText(QApplication::translate("EBaseWidget", "Prenom:", 0, QApplication::UnicodeUTF8));
        LDateNaiss->setText(QApplication::translate("EBaseWidget", "Date de Naissance:", 0, QApplication::UnicodeUTF8));
        lAdresse->setText(QApplication::translate("EBaseWidget", "Adresse:", 0, QApplication::UnicodeUTF8));
        lEtat->setText(QApplication::translate("EBaseWidget", "Etat (information supplementaire):", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("EBaseWidget", "Nom:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EBaseWidget: public Ui_EBaseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EBASEWIDGET_H
