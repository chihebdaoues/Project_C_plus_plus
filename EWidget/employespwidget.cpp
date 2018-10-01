#include "employespwidget.h"
#include "ui_employespwidget.h"

EmployeSpWidget::EmployeSpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeSpWidget)
{
    ui->setupUi(this);
}
void EmployeSpWidget::setColumnRange(){
    ui->sbDay->setMaximum(30);
    ui->sbDay->setMinimum(1);
    ui->sbYear->setMaximum(2017);
    ui->sbYear->setMinimum(1999);
    QList<QString> Months;
    Months.append(tr("Janvier"));Months.append(tr("Fevrier"));Months.append(tr("Mars"));Months.append(tr("Avril"));
    Months.append(tr("Mai"));Months.append(tr("Juin"));Months.append(tr("Juillet"));Months.append(tr("Aout"));
    Months.append(tr("Septembre"));Months.append(tr("Octobre"));Months.append(tr("Novembre"));Months.append(tr("Decembre"));
    ui->sbMonth->addItems(Months);

}
EmployeSpWidget::~EmployeSpWidget()
{
    delete ui;
}
