#include "elevewidget.h"
#include "ui_elevewidget.h"

EleveWidget::EleveWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EleveWidget)
{   baseWidget = new EBaseWidget;
    baseWidget->setLEName("");
    layout = new QVBoxLayout;
    layout->addWidget(baseWidget);
    //setLayout(layout);
    ui->setupUi(this);
    ui->baseWidget->setLayout(layout);
}

EleveWidget::~EleveWidget()
{
    delete ui;
}
