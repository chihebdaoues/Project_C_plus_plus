/********************************************************************************
** Form generated from reading UI file 'eleveform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEVEFORM_H
#define UI_ELEVEFORM_H

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

class Ui_EleveForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbAjoutMod;
    QWidget *widget;
    QListWidget *lwEleves;
    QLineEdit *leSearch;
    QPushButton *pbReturnClear;
    QPushButton *pbSearch;
    QFrame *line;
    QPushButton *pbClearSupp;

    void setupUi(QWidget *EleveForm)
    {
        if (EleveForm->objectName().isEmpty())
            EleveForm->setObjectName(QString::fromUtf8("EleveForm"));
        EleveForm->resize(509, 461);
        gridLayout = new QGridLayout(EleveForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbAjoutMod = new QPushButton(EleveForm);
        pbAjoutMod->setObjectName(QString::fromUtf8("pbAjoutMod"));
        pbAjoutMod->setDefault(true);

        gridLayout->addWidget(pbAjoutMod, 3, 6, 1, 1);

        widget = new QWidget(EleveForm);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 4, 3, 3);

        lwEleves = new QListWidget(EleveForm);
        lwEleves->setObjectName(QString::fromUtf8("lwEleves"));

        gridLayout->addWidget(lwEleves, 1, 0, 3, 2);

        leSearch = new QLineEdit(EleveForm);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(leSearch, 0, 0, 1, 1);

        pbReturnClear = new QPushButton(EleveForm);
        pbReturnClear->setObjectName(QString::fromUtf8("pbReturnClear"));

        gridLayout->addWidget(pbReturnClear, 3, 4, 1, 1);

        pbSearch = new QPushButton(EleveForm);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));

        gridLayout->addWidget(pbSearch, 0, 1, 1, 1);

        line = new QFrame(EleveForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 3, 4, 1);

        pbClearSupp = new QPushButton(EleveForm);
        pbClearSupp->setObjectName(QString::fromUtf8("pbClearSupp"));

        gridLayout->addWidget(pbClearSupp, 3, 5, 1, 1);

        QWidget::setTabOrder(leSearch, lwEleves);
        QWidget::setTabOrder(lwEleves, pbReturnClear);
        QWidget::setTabOrder(pbReturnClear, pbClearSupp);
        QWidget::setTabOrder(pbClearSupp, pbAjoutMod);
        QWidget::setTabOrder(pbAjoutMod, pbSearch);

        retranslateUi(EleveForm);
        QObject::connect(leSearch, SIGNAL(returnPressed()), pbSearch, SLOT(click()));

        QMetaObject::connectSlotsByName(EleveForm);
    } // setupUi

    void retranslateUi(QWidget *EleveForm)
    {
        EleveForm->setWindowTitle(QApplication::translate("EleveForm", "Form", 0, QApplication::UnicodeUTF8));
        pbAjoutMod->setText(QApplication::translate("EleveForm", "Ajouter", 0, QApplication::UnicodeUTF8));
        leSearch->setText(QString());
        leSearch->setPlaceholderText(QApplication::translate("EleveForm", "Rechercher", 0, QApplication::UnicodeUTF8));
        pbReturnClear->setText(QApplication::translate("EleveForm", "Retour", 0, QApplication::UnicodeUTF8));
        pbSearch->setText(QApplication::translate("EleveForm", "Chercher", 0, QApplication::UnicodeUTF8));
        pbClearSupp->setText(QApplication::translate("EleveForm", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EleveForm: public Ui_EleveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEVEFORM_H
