#include "clubform.h"
#include "ui_clubform.h"

ClubForm::ClubForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClubForm)
{
    ui->setupUi(this);
}

ClubForm::~ClubForm()
{
    delete ui;
}

void ClubForm::on_pbReturn_clicked()
{
    emit goBackScreen();
}
