/********************************************************************************
** Form generated from reading UI file 'startform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTFORM_H
#define UI_STARTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartForm
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pbGestEleve;
    QPushButton *pbGestClasse;
    QPushButton *pbGestEmploye;
    QPushButton *pbGestClub;
    QPushButton *pbGestClub_2;
    QPushButton *pbGestClub_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *hs;
    QPushButton *pbQuit;
    QPushButton *pbAbout;

    void setupUi(QWidget *StartForm)
    {
        if (StartForm->objectName().isEmpty())
            StartForm->setObjectName(QString::fromUtf8("StartForm"));
        StartForm->resize(258, 358);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartForm->sizePolicy().hasHeightForWidth());
        StartForm->setSizePolicy(sizePolicy);
        StartForm->setMinimumSize(QSize(0, 0));
        StartForm->setBaseSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(StartForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbGestEleve = new QPushButton(StartForm);
        pbGestEleve->setObjectName(QString::fromUtf8("pbGestEleve"));
        sizePolicy.setHeightForWidth(pbGestEleve->sizePolicy().hasHeightForWidth());
        pbGestEleve->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestEleve);

        pbGestClasse = new QPushButton(StartForm);
        pbGestClasse->setObjectName(QString::fromUtf8("pbGestClasse"));
        sizePolicy.setHeightForWidth(pbGestClasse->sizePolicy().hasHeightForWidth());
        pbGestClasse->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestClasse);

        pbGestEmploye = new QPushButton(StartForm);
        pbGestEmploye->setObjectName(QString::fromUtf8("pbGestEmploye"));
        sizePolicy.setHeightForWidth(pbGestEmploye->sizePolicy().hasHeightForWidth());
        pbGestEmploye->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestEmploye);

        pbGestClub = new QPushButton(StartForm);
        pbGestClub->setObjectName(QString::fromUtf8("pbGestClub"));
        sizePolicy.setHeightForWidth(pbGestClub->sizePolicy().hasHeightForWidth());
        pbGestClub->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestClub);

        pbGestClub_2 = new QPushButton(StartForm);
        pbGestClub_2->setObjectName(QString::fromUtf8("pbGestClub_2"));
        sizePolicy.setHeightForWidth(pbGestClub_2->sizePolicy().hasHeightForWidth());
        pbGestClub_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestClub_2);

        pbGestClub_3 = new QPushButton(StartForm);
        pbGestClub_3->setObjectName(QString::fromUtf8("pbGestClub_3"));
        sizePolicy.setHeightForWidth(pbGestClub_3->sizePolicy().hasHeightForWidth());
        pbGestClub_3->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbGestClub_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hs = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hs);

        pbQuit = new QPushButton(StartForm);
        pbQuit->setObjectName(QString::fromUtf8("pbQuit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbQuit->sizePolicy().hasHeightForWidth());
        pbQuit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pbQuit);

        pbAbout = new QPushButton(StartForm);
        pbAbout->setObjectName(QString::fromUtf8("pbAbout"));
        sizePolicy1.setHeightForWidth(pbAbout->sizePolicy().hasHeightForWidth());
        pbAbout->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pbAbout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StartForm);

        QMetaObject::connectSlotsByName(StartForm);
    } // setupUi

    void retranslateUi(QWidget *StartForm)
    {
        StartForm->setWindowTitle(QApplication::translate("StartForm", "Form", 0, QApplication::UnicodeUTF8));
        pbGestEleve->setText(QApplication::translate("StartForm", "Gestion des eleves", 0, QApplication::UnicodeUTF8));
        pbGestClasse->setText(QApplication::translate("StartForm", "Gestion des classe", 0, QApplication::UnicodeUTF8));
        pbGestEmploye->setText(QApplication::translate("StartForm", "Gestion des employes", 0, QApplication::UnicodeUTF8));
        pbGestClub->setText(QApplication::translate("StartForm", "Gestion des clubs", 0, QApplication::UnicodeUTF8));
        pbGestClub_2->setText(QApplication::translate("StartForm", "Gestion des evenements", 0, QApplication::UnicodeUTF8));
        pbGestClub_3->setText(QApplication::translate("StartForm", "Gestion des salles", 0, QApplication::UnicodeUTF8));
        pbQuit->setText(QApplication::translate("StartForm", "Quitter !", 0, QApplication::UnicodeUTF8));
        pbAbout->setText(QApplication::translate("StartForm", "About !", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StartForm: public Ui_StartForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTFORM_H
