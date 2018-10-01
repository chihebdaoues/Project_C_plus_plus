#include "classeform.h"
#include "ui_classeform.h"

ClasseForm::ClasseForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClasseForm)
{
    ui->setupUi(this);
}

ClasseForm::~ClasseForm()
{
    delete ui;
}

void ClasseForm::on_pbReturn_clicked()
{
    emit goBackScreen();
}
