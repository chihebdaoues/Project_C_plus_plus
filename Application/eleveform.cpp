#include "eleveform.h"
#include "ui_eleveform.h"
#include "QDebug"
#include <iostream>
EleveForm::EleveForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EleveForm)
{
    ebasewidget = new EBaseWidget;
    ebasewidget->clear();
    elevespwidget = new EleveSpWidget;
    elevespwidget->clear();
    widLayout = new QVBoxLayout;
    widLayout->addWidget(ebasewidget);
    widLayout->addWidget(elevespwidget);
    //widLayout->sizeConstraint(widLayout->sizeHint());
    ui->setupUi(this);
    ui->widget->setLayout(widLayout);

    connect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SIGNAL(goBackScreen()));
    connect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
    connect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbAjout_clicked()));
    connectionStart =true;

    connect(ui->lwEleves,SIGNAL(itemSelectionChanged()),this,SLOT(updateSelected()));
}
void EleveForm::search(QString str){
    for(int i=0;i<vec->size();i++)
        if((*vec)[i]->getnom()==str.toStdString() || (*vec)[i]->getprenom()==str.toStdString()){
        ui->lwEleves->setCurrentRow(i);
        break;
        }
}
void EleveForm::updateSelected(){
    updateForm(ui->lwEleves->currentRow());
    updateButton(ui->lwEleves->currentRow());
}
void EleveForm::updateButton(int val){
    if( !connectionStart && val ==-1){
        disconnect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
        disconnect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbSupp_clicked()));
        disconnect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbMod_clicked()));

        connect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SIGNAL(goBackScreen()));
        connect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
        connect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbAjout_clicked()));
        ui->pbClearSupp->setText("Clear");
        ui->pbReturnClear->setText("Retour");
        ui->pbAjoutMod->setText("Ajouter");
        connectionStart=true;
    }else if(connectionStart && val !=-1){
        disconnect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SIGNAL(goBackScreen()));
        disconnect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
        disconnect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbAjout_clicked()));

        connect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
        connect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbSupp_clicked()));
        connect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbMod_clicked()));
        ui->pbClearSupp->setText("Supprimer");
        ui->pbReturnClear->setText("Clear");
        ui->pbAjoutMod->setText("Modification");
        connectionStart=false;
    }
}
void EleveForm::updateForm(int val){
    ebasewidget->setleName(QString::fromStdString((*vec)[val]->getnom()));
    ebasewidget->setleLastName(QString::fromStdString((*vec)[val]->getprenom()));
    ebasewidget->setleAdresse(QString::fromStdString((*vec)[val]->geradresse()));
    ebasewidget->setpteEtat( QString::fromStdString((*vec)[val]->getetat()) );
    ebasewidget->setsbDay((*vec)[val]->getjrsNaiss());
    ebasewidget->setsbMonth((*vec)[val]->getmoisNaiss());
    ebasewidget->setsbYear( (*vec)[val]->getanneeNaiss() );
    elevespwidget->setleNamePar( QString::fromStdString((*vec)[val]->getnom_parent()) );
    elevespwidget->setleEmailPar( QString::fromStdString((*vec)[val]->getmail_parent()) );
    elevespwidget->setleTelPar( QString::fromStdString((*vec)[val]->getnum_parent()) );
}
void EleveForm::config(std::vector<Eleve*>*vect){
    vec = vect;
    for(unsigned int i=0;i<(*vec).size();i++)
        ui->lwEleves->addItem(QString::fromStdString((*vec)[i]->getnom())+" "+QString::fromStdString((*vec)[i]->getprenom()));
}
EleveForm::~EleveForm()
{
    delete ui;
}
void EleveForm::pbSupp_clicked(){
    int ind = ui->lwEleves->currentRow();

    if(vec->size()!=1){
        ui->lwEleves->takeItem(ind);
        vec->erase(vec->begin()+ind);
    }else{
        ui->lwEleves->clear();
        vec->clear();
    }
    pbClear_clicked();
    std::fstream myfile;
    myfile.open("eleves.bin",ios::out | ios::trunc |ios::binary);
    for(unsigned int i=0;i<vec->size();i++){
        myfile<<*(*vec)[i];
    }
    myfile.close();
}

void EleveForm::pbMod_clicked(){
    int ind = ui->lwEleves->currentRow();
    Eleve *e = (*vec)[ind];
    e->setmail_parent(elevespwidget->getleEmailPar().toUpper().toStdString());
    e->setnum_telph_parent(elevespwidget->getleTelPar().toUpper().toStdString());
    e->setnom_parent(elevespwidget->getleNamePar().toUpper().toStdString());
    e->setnom(ebasewidget->getleName().toUpper().toStdString());
    e->setprenom(ebasewidget->getleLastName().toUpper().toStdString());
    e->setdateNaiss(Date(ebasewidget->getsbDay(),ebasewidget->getsbMonth(),ebasewidget->getsbYear()));
    e->setadresse(ebasewidget->getleAdresse().toUpper().toStdString());
    e->setetat(ebasewidget->getpteEtat().toUpper().toStdString());

    ui->lwEleves->clear();
    for(unsigned int i=0;i<(*vec).size();i++)
        ui->lwEleves->addItem(QString::fromStdString((*vec)[i]->getnom())+" "+QString::fromStdString((*vec)[i]->getprenom()));

    std::fstream myfile;
    myfile.open("eleves.bin",ios::out | ios::trunc |ios::binary);
    for(unsigned int i=0;i<vec->size();i++){
        myfile<<*(*vec)[i];
    }
    myfile.close();
}

void EleveForm::pbAjout_clicked()
{
    Eleve *e = new Eleve(elevespwidget->getleEmailPar().toUpper().toStdString(),elevespwidget->getleTelPar().toUpper().toStdString(),
            elevespwidget->getleNamePar().toUpper().toStdString(),ebasewidget->getleName().toUpper().toStdString(),
                         ebasewidget->getleLastName().toUpper().toStdString(),
            ebasewidget->getsbDay(),ebasewidget->getsbMonth(),ebasewidget->getsbYear(),
            ebasewidget->getleAdresse().toUpper().toStdString(),ebasewidget->getpteEtat().toUpper().toStdString());
    (*vec).push_back(e);
    std::fstream myfile;
    myfile.open("eleves.bin",ios::out | ios::app |ios::binary);
    myfile<<*e;
    myfile.close();
    ui->lwEleves->addItem(ebasewidget->getleName().toUpper()+" "+ebasewidget->getleLastName().toUpper());

}

void EleveForm::pbClear_clicked()
{
    ui->lwEleves->clearSelection();
    updateButton(-1);
    ui->leSearch->clear();
    ebasewidget->clear();
    elevespwidget->clear();
}

void EleveForm::on_pbSearch_clicked()
{
    search(ui->leSearch->text().toUpper());
}
