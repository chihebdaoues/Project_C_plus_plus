#include "startform.h"
#include "ui_startform.h"

StartForm::StartForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartForm)
{
    ui->setupUi(this);
    //layout()->setSizeConstraint(QLayout::SetFixedSize);
    connect(ui->pbAbout,SIGNAL(clicked(bool)), qApp, SLOT(aboutQt()));
}

StartForm::~StartForm()
{
    delete ui;
}

void StartForm::on_pbGestEleve_clicked()
{
    emit switchScreen(1);
}

void StartForm::on_pbGestClasse_clicked()
{
    emit switchScreen(2);
}

void StartForm::on_pbGestEmploye_clicked()
{
    emit switchScreen(3);
}

void StartForm::on_pbGestClub_clicked()
{
    emit switchScreen(4);
}


void StartForm::on_pbAbout_clicked()
{
    //QMessageBox::about(this,"dagdag","zebi");
}
