#include "employespwidget.h"
#include "ui_employespwidget.h"

EmployeSpWidget::EmployeSpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeSpWidget)
{
    ui->setupUi(this);
    setColumnRange();
    clear();
}
void EmployeSpWidget::setColumnRange(){
    ui->sbDay->setMaximum(30);
    ui->sbDay->setMinimum(1);
    ui->sbYear->setMinimum(1900);
    ui->sbYear->setMaximum(2017);
    QList<QString> Months;
    Months.append(tr("Janvier"));Months.append(tr("Fevrier"));Months.append(tr("Mars"));Months.append(tr("Avril"));
    Months.append(tr("Mai"));Months.append(tr("Juin"));Months.append(tr("Juillet"));Months.append(tr("Aout"));
    Months.append(tr("Septembre"));Months.append(tr("Octobre"));Months.append(tr("Novembre"));Months.append(tr("Decembre"));
    ui->sbMonth->addItems(Months);
}
void EmployeSpWidget::clear(){
    ui->cbRetraite->setChecked(false);
    ui->dsbSalaire->setValue(0.00);
    ui->leSpecial->clear();
    ui->sbDay->setValue(1);
    ui->sbMonth->setCurrentIndex(0);
    ui->sbYear->setValue(2000);
}

int EmployeSpWidget::getsbDay(){return this->ui->sbDay->value();}
int EmployeSpWidget::getsbMonth(){return this->ui->sbMonth->currentIndex()+1;}
int EmployeSpWidget::getsbYear(){return this->ui->sbYear->value();}
bool EmployeSpWidget::getcbRetraite(){return this->ui->cbRetraite->isChecked();}
QString EmployeSpWidget::getleSpecial(){return this->ui->leSpecial->text();}
double EmployeSpWidget::getdsbSalaire(){return this->ui->dsbSalaire->value();}


void EmployeSpWidget::setsbDay(int val){ this->ui->sbDay->setValue(val);}
void EmployeSpWidget::setsbMonth(int val){ this->ui->sbMonth->setCurrentIndex(val-1);}
void EmployeSpWidget::setsbYear(int val){ this->ui->sbYear->setValue(val);}
void EmployeSpWidget::setcbRetraite(bool x){this->ui->cbRetraite->setChecked(x);}
void EmployeSpWidget::setleSpecial(QString str){this->ui->leSpecial->setText(str);}
void EmployeSpWidget::setdsbSalaire(double val){this->ui->dsbSalaire->setValue(val);}
EmployeSpWidget::~EmployeSpWidget()
{
    delete ui;
}
