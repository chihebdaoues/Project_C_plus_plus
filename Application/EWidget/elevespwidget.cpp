#include "elevespwidget.h"
#include "ui_elevespwidget.h"

EleveSpWidget::EleveSpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EleveSpWidget)
{
    ui->setupUi(this);  
}
void EleveSpWidget::setleEmailPar(QString str){ui->leEmailPar->setText(str);}
void EleveSpWidget::setleNamePar(QString str){ui->leNamePar->setText(str);}
void EleveSpWidget::setleTelPar(QString str){ui->leTelPar->setText(str);}

QString EleveSpWidget::getleEmailPar(){return ui->leEmailPar->text();}
QString EleveSpWidget::getleNamePar(){return ui->leNamePar->text();}
QString EleveSpWidget::getleTelPar(){return ui->leTelPar->text();}

void EleveSpWidget::clear(){
    ui->leEmailPar->clear();
    ui->leNamePar->clear();
    ui->leTelPar->clear();
}
EleveSpWidget::~EleveSpWidget()
{
    delete ui;
}
