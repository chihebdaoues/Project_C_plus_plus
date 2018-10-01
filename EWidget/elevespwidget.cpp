#include "elevespwidget.h"
#include "ui_elevespwidget.h"

EleveSpWidget::EleveSpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EleveSpWidget)
{
    ui->setupUi(this);
}

EleveSpWidget::~EleveSpWidget()
{
    delete ui;
}
