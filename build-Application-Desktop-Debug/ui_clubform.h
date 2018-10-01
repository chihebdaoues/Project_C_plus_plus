/********************************************************************************
** Form generated from reading UI file 'clubform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUBFORM_H
#define UI_CLUBFORM_H

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

class Ui_ClubForm
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *twClasses;
    QGroupBox *gbInfo;
    QGridLayout *gridLayout;
    QLabel *lSalle;
    QLabel *lName;
    QLineEdit *leSalle;
    QTableWidget *twEleves;
    QLineEdit *leLevel;
    QLineEdit *leName;
    QLabel *lnbrEleve;
    QLineEdit *lenbrEleve;
    QLabel *lLevel;
    QHBoxLayout *hlButtons;
    QPushButton *pbReturn;
    QPushButton *pbClearSup;
    QPushButton *pbAjoutMod;

    void setupUi(QWidget *ClubForm)
    {
        if (ClubForm->objectName().isEmpty())
            ClubForm->setObjectName(QString::fromUtf8("ClubForm"));
        ClubForm->resize(287, 383);
        verticalLayout = new QVBoxLayout(ClubForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        twClasses = new QTableWidget(ClubForm);
        twClasses->setObjectName(QString::fromUtf8("twClasses"));

        verticalLayout->addWidget(twClasses);

        gbInfo = new QGroupBox(ClubForm);
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

        twEleves = new QTableWidget(gbInfo);
        twEleves->setObjectName(QString::fromUtf8("twEleves"));

        gridLayout->addWidget(twEleves, 4, 0, 1, 2);

        leLevel = new QLineEdit(gbInfo);
        leLevel->setObjectName(QString::fromUtf8("leLevel"));

        gridLayout->addWidget(leLevel, 1, 1, 1, 1);

        leName = new QLineEdit(gbInfo);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 1);

        lnbrEleve = new QLabel(gbInfo);
        lnbrEleve->setObjectName(QString::fromUtf8("lnbrEleve"));

        gridLayout->addWidget(lnbrEleve, 3, 0, 1, 1);

        lenbrEleve = new QLineEdit(gbInfo);
        lenbrEleve->setObjectName(QString::fromUtf8("lenbrEleve"));

        gridLayout->addWidget(lenbrEleve, 3, 1, 1, 1);

        lLevel = new QLabel(gbInfo);
        lLevel->setObjectName(QString::fromUtf8("lLevel"));

        gridLayout->addWidget(lLevel, 1, 0, 1, 1);


        verticalLayout->addWidget(gbInfo);

        hlButtons = new QHBoxLayout();
        hlButtons->setObjectName(QString::fromUtf8("hlButtons"));
        pbReturn = new QPushButton(ClubForm);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));

        hlButtons->addWidget(pbReturn);

        pbClearSup = new QPushButton(ClubForm);
        pbClearSup->setObjectName(QString::fromUtf8("pbClearSup"));

        hlButtons->addWidget(pbClearSup);

        pbAjoutMod = new QPushButton(ClubForm);
        pbAjoutMod->setObjectName(QString::fromUtf8("pbAjoutMod"));

        hlButtons->addWidget(pbAjoutMod);


        verticalLayout->addLayout(hlButtons);


        retranslateUi(ClubForm);

        QMetaObject::connectSlotsByName(ClubForm);
    } // setupUi

    void retranslateUi(QWidget *ClubForm)
    {
        ClubForm->setWindowTitle(QApplication::translate("ClubForm", "Form", 0, QApplication::UnicodeUTF8));
        gbInfo->setTitle(QApplication::translate("ClubForm", "Information", 0, QApplication::UnicodeUTF8));
        lSalle->setText(QApplication::translate("ClubForm", "Salle:", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("ClubForm", "Nom de classe:", 0, QApplication::UnicodeUTF8));
        lnbrEleve->setText(QApplication::translate("ClubForm", "nbr d'eleves:", 0, QApplication::UnicodeUTF8));
        lLevel->setText(QApplication::translate("ClubForm", "Niveau:", 0, QApplication::UnicodeUTF8));
        pbReturn->setText(QApplication::translate("ClubForm", "Retour", 0, QApplication::UnicodeUTF8));
        pbClearSup->setText(QApplication::translate("ClubForm", "Clear", 0, QApplication::UnicodeUTF8));
        pbAjoutMod->setText(QApplication::translate("ClubForm", "Ajouter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClubForm: public Ui_ClubForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUBFORM_H
