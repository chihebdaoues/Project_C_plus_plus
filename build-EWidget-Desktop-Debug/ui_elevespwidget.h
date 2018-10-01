/********************************************************************************
** Form generated from reading UI file 'elevespwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEVESPWIDGET_H
#define UI_ELEVESPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EleveSpWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lNamePar;
    QLineEdit *leNamePar;
    QLabel *lEmailPar;
    QLineEdit *leEmailPar;
    QLabel *lTelPar;
    QLineEdit *leTelPar;

    void setupUi(QWidget *EleveSpWidget)
    {
        if (EleveSpWidget->objectName().isEmpty())
            EleveSpWidget->setObjectName(QString::fromUtf8("EleveSpWidget"));
        EleveSpWidget->resize(400, 300);
        gridLayout = new QGridLayout(EleveSpWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        lNamePar = new QLabel(EleveSpWidget);
        lNamePar->setObjectName(QString::fromUtf8("lNamePar"));

        gridLayout->addWidget(lNamePar, 0, 0, 1, 1);

        leNamePar = new QLineEdit(EleveSpWidget);
        leNamePar->setObjectName(QString::fromUtf8("leNamePar"));

        gridLayout->addWidget(leNamePar, 0, 1, 1, 1);

        lEmailPar = new QLabel(EleveSpWidget);
        lEmailPar->setObjectName(QString::fromUtf8("lEmailPar"));

        gridLayout->addWidget(lEmailPar, 1, 0, 1, 1);

        leEmailPar = new QLineEdit(EleveSpWidget);
        leEmailPar->setObjectName(QString::fromUtf8("leEmailPar"));

        gridLayout->addWidget(leEmailPar, 1, 1, 1, 1);

        lTelPar = new QLabel(EleveSpWidget);
        lTelPar->setObjectName(QString::fromUtf8("lTelPar"));

        gridLayout->addWidget(lTelPar, 2, 0, 1, 1);

        leTelPar = new QLineEdit(EleveSpWidget);
        leTelPar->setObjectName(QString::fromUtf8("leTelPar"));

        gridLayout->addWidget(leTelPar, 2, 1, 1, 1);


        retranslateUi(EleveSpWidget);

        QMetaObject::connectSlotsByName(EleveSpWidget);
    } // setupUi

    void retranslateUi(QWidget *EleveSpWidget)
    {
        EleveSpWidget->setWindowTitle(QApplication::translate("EleveSpWidget", "EleveSpWidget", 0, QApplication::UnicodeUTF8));
        lNamePar->setText(QApplication::translate("EleveSpWidget", "Prenom parent:", 0, QApplication::UnicodeUTF8));
        lEmailPar->setText(QApplication::translate("EleveSpWidget", "Email parent:", 0, QApplication::UnicodeUTF8));
        lTelPar->setText(QApplication::translate("EleveSpWidget", "Tel parent:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EleveSpWidget: public Ui_EleveSpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEVESPWIDGET_H
