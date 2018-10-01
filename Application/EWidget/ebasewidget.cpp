#include "ebasewidget.h"
#include "ui_ebasewidget.h"

EBaseWidget::EBaseWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EBaseWidget)
{
    ui->setupUi(this);
    setColumnRange();
    connect(ui->leName,SIGNAL(textChanged(QString)),this,SLOT(changeMade()));
    connect(ui->leLastName,SIGNAL(textChanged(QString)),this,SLOT(changeMade()));
    connect(ui->leAdresse,SIGNAL(textChanged(QString)),this,SLOT(changeMade()));
    connect(ui->pteEtat,SIGNAL(textChanged()),this,SLOT(changeMade()));
    clear();
}
void EBaseWidget::changeMade(){
    emit Changed();
}
void EBaseWidget::clear(){
    ui->leAdresse->clear();
    ui->leLastName->clear();
    ui->leName->clear();
    ui->pteEtat->clear();
    ui->sbDay->setValue(1);
    ui->sbMonth->setCurrentIndex(0);
    ui->sbYear->setValue(2000);
}
void EBaseWidget::setColumnRange(){
    ui->sbDay->setMaximum(30);
    ui->sbDay->setMinimum(1);
    ui->sbYear->setMinimum(1999);
    ui->sbYear->setMaximum(2017);
    QList<QString> Months;
    Months.append(tr("Janvier"));Months.append(tr("Fevrier"));Months.append(tr("Mars"));Months.append(tr("Avril"));
    Months.append(tr("Mai"));Months.append(tr("Juin"));Months.append(tr("Juillet"));Months.append(tr("Aout"));
    Months.append(tr("Septembre"));Months.append(tr("Octobre"));Months.append(tr("Novembre"));Months.append(tr("Decembre"));
    ui->sbMonth->addItems(Months);

}
QString EBaseWidget::getleName(){return this->ui->leName->text();}
QString EBaseWidget::getleLastName(){return this->ui->leLastName->text();}
QString EBaseWidget::getpteEtat(){return this->ui->pteEtat->toPlainText();}
QString EBaseWidget::getleAdresse(){return this->ui->leAdresse->text();}
int EBaseWidget::getsbDay(){return this->ui->sbDay->value();}
int EBaseWidget::getsbMonth(){return this->ui->sbMonth->currentIndex()+1;}
int EBaseWidget::getsbYear(){return this->ui->sbYear->value();}

void EBaseWidget::setleName(QString str){ this->ui->leName->setText(str);}
void EBaseWidget::setleLastName(QString str){ this->ui->leLastName->setText(str);}
void EBaseWidget::setpteEtat(QString str){ this->ui->pteEtat->clear();this->ui->pteEtat->appendPlainText(str);}
void EBaseWidget::setleAdresse(QString str){ this->ui->leAdresse->setText(str);}
void EBaseWidget::setsbDay(int val){ this->ui->sbDay->setValue(val);}
void EBaseWidget::setsbMonth(int val){ this->ui->sbMonth->setCurrentIndex(val-1);}
void EBaseWidget::setsbYear(int val){ this->ui->sbYear->setValue(val);}

EBaseWidget::~EBaseWidget()
{
    delete ui;
}
