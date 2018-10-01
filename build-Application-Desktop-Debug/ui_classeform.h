/********************************************************************************
** Form generated from reading UI file 'classeform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSEFORM_H
#define UI_CLASSEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClasseForm
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *twClasses;
    QGroupBox *gbInfo;
    QGridLayout *gridLayout;
    QLabel *lSalle;
    QLabel *lName;
    QLineEdit *leSalle;
    QLineEdit *leLevel;
    QLineEdit *lenbrEleve;
    QLineEdit *leName;
    QLabel *lnbrEleve;
    QLabel *lLevel;
    QTableWidget *twEleves;
    QHBoxLayout *hlButtons;
    QPushButton *pbReturn;
    QPushButton *pbClearSup;
    QPushButton *pbAjoutMod;

    void setupUi(QWidget *ClasseForm)
    {
        if (ClasseForm->objectName().isEmpty())
            ClasseForm->setObjectName(QString::fromUtf8("ClasseForm"));
        ClasseForm->resize(474, 702);
        verticalLayout = new QVBoxLayout(ClasseForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        twClasses = new QTableWidget(ClasseForm);
        twClasses->setObjectName(QString::fromUtf8("twClasses"));

        verticalLayout->addWidget(twClasses);

        gbInfo = new QGroupBox(ClasseForm);
        gbInfo->setObjectName(QString::fromUtf8("gbInfo"));
        gridLayout = new QGridLayout(gbInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lSalle = new QLabel(gbInfo);
        lSalle->setObjectName(QString::fromUtf8("lSalle"));

        gridLayout->addWidget(lSalle, 2, 0, 1, 1);

        lName = new QLabel(gbInfo);
        lName->setObjectName(QString::fromUtf8("lName"));

        gridLayout->addWidget(lName, 0, 0, 1, 1);

        leSalle = new QLineEdit(gbInfo);
        leSalle->setObjectName(QString::fromUtf8("leSalle"));

        gridLayout->addWidget(leSalle, 2, 1, 1, 1);

        leLevel = new QLineEdit(gbInfo);
        leLevel->setObjectName(QString::fromUtf8("leLevel"));

        gridLayout->addWidget(leLevel, 1, 1, 1, 1);

        lenbrEleve = new QLineEdit(gbInfo);
        lenbrEleve->setObjectName(QString::fromUtf8("lenbrEleve"));

        gridLayout->addWidget(lenbrEleve, 3, 1, 1, 1);

        leName = new QLineEdit(gbInfo);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 1);

        lnbrEleve = new QLabel(gbInfo);
        lnbrEleve->setObjectName(QString::fromUtf8("lnbrEleve"));

        gridLayout->addWidget(lnbrEleve, 3, 0, 1, 1);

        lLevel = new QLabel(gbInfo);
        lLevel->setObjectName(QString::fromUtf8("lLevel"));

        gridLayout->addWidget(lLevel, 1, 0, 1, 1);

        twEleves = new QTableWidget(gbInfo);
        twEleves->setObjectName(QString::fromUtf8("twEleves"));

        gridLayout->addWidget(twEleves, 4, 0, 1, 2);


        verticalLayout->addWidget(gbInfo);

        hlButtons = new QHBoxLayout();
        hlButtons->setObjectName(QString::fromUtf8("hlButtons"));
        pbReturn = new QPushButton(ClasseForm);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));

        hlButtons->addWidget(pbReturn);

        pbClearSup = new QPushButton(ClasseForm);
        pbClearSup->setObjectName(QString::fromUtf8("pbClearSup"));

        hlButtons->addWidget(pbClearSup);

        pbAjoutMod = new QPushButton(ClasseForm);
        pbAjoutMod->setObjectName(QString::fromUtf8("pbAjoutMod"));

        hlButtons->addWidget(pbAjoutMod);


        verticalLayout->addLayout(hlButtons);


        retranslateUi(ClasseForm);

        QMetaObject::connectSlotsByName(ClasseForm);
    } // setupUi

    void retranslateUi(QWidget *ClasseForm)
    {
        ClasseForm->setWindowTitle(QApplication::translate("ClasseForm", "Form", 0, QApplication::UnicodeUTF8));
        gbInfo->setTitle(QApplication::translate("ClasseForm", "Information", 0, QApplication::UnicodeUTF8));
        lSalle->setText(QApplication::translate("ClasseForm", "Salle:", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("ClasseForm", "Nom de classe:", 0, QApplication::UnicodeUTF8));
        lnbrEleve->setText(QApplication::translate("ClasseForm", "nbr d'eleves:", 0, QApplication::UnicodeUTF8));
        lLevel->setText(QApplication::translate("ClasseForm", "Niveau:", 0, QApplication::UnicodeUTF8));
        pbReturn->setText(QApplication::translate("ClasseForm", "Retour", 0, QApplication::UnicodeUTF8));
        pbClearSup->setText(QApplication::translate("ClasseForm", "Clear", 0, QApplication::UnicodeUTF8));
        pbAjoutMod->setText(QApplication::translate("ClasseForm", "Ajouter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClasseForm: public Ui_ClasseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSEFORM_H
