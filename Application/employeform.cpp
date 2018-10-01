#include "employeform.h"
#include "ui_employeform.h"
#include <QDebug>
EmployeForm::EmployeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeForm)
{
    ebasewidget = new EBaseWidget;
    ebasewidget->clear();
    employespwidget = new EmployeSpWidget;
    employespwidget->clear();
    widLayout = new QVBoxLayout;
    widLayout->addWidget(ebasewidget);
    widLayout->addWidget(employespwidget);
    //widLayout->sizeConstraint(widLayout->sizeHint());
    ui->setupUi(this);
    ui->widget->setLayout(widLayout);

    connect(ui->pbReturnClear,SIGNAL(clicked(bool)),this,SIGNAL(goBackScreen()));
    connect(ui->pbClearSupp,SIGNAL(clicked(bool)),this,SLOT(pbClear_clicked()));
    connect(ui->pbAjoutMod,SIGNAL(clicked(bool)),this,SLOT(pbAjout_clicked()));

    connect(ui->lwEmployes,SIGNAL(itemSelectionChanged()),this,SLOT(updateSelected()));

    connectionStart =true;
}
void EmployeForm::search(QString str){
    for(int i=0;i<vec->size();i++)
        if((*vec)[i]->getnom()==str.toStdString() || (*vec)[i]->getprenom()==str.toStdString()){
        ui->lwEmployes->setCurrentRow(i);
        break;
        }
}
void EmployeForm::updateSelected(){
    updateForm(ui->lwEmployes->currentRow());
    updateButton(ui->lwEmployes->currentRow());
}
void EmployeForm::updateButton(int val){
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
void EmployeForm::updateForm(int val){
    ebasewidget->setleName(QString::fromStdString((*vec)[val]->getnom()));
    ebasewidget->setleLastName(QString::fromStdString((*vec)[val]->getprenom()));
    ebasewidget->setleAdresse(QString::fromStdString((*vec)[val]->geradresse()));
    ebasewidget->setpteEtat( QString::fromStdString((*vec)[val]->getetat()) );
    ebasewidget->setsbDay((*vec)[val]->getjrsNaiss());
    ebasewidget->setsbMonth((*vec)[val]->getmoisNaiss());
    ebasewidget->setsbYear((*vec)[val]->getanneeNaiss());
    employespwidget->setdsbSalaire((*vec)[val]->getsalaire());
    employespwidget->setsbDay((*vec)[val]->getdateEmbauche().getjrs());
    employespwidget->setsbMonth((*vec)[val]->getdateEmbauche().getmois());
    employespwidget->setsbYear((*vec)[val]->getdateEmbauche().getannee());
    employespwidget->setleSpecial(QString::fromStdString((*vec)[val]->getSpecialite()));
    employespwidget->setcbRetraite((*vec)[val]->getretraite());
}
void EmployeForm::pbAjout_clicked()
{
    Employee *e = new Employee(ebasewidget->getleName().toUpper().toStdString(),ebasewidget->getleLastName().toUpper().toStdString(),
                      ebasewidget->getsbDay(),ebasewidget->getsbMonth(),ebasewidget->getsbYear(),
                      ebasewidget->getpteEtat().toUpper().toStdString(),ebasewidget->getleAdresse().toUpper().toStdString(),
                      employespwidget->getdsbSalaire(),employespwidget->getsbDay(),employespwidget->getsbMonth(),
                      employespwidget->getsbYear(),employespwidget->getleSpecial().toUpper().toStdString());
    e->setretraite(employespwidget->getcbRetraite());
    (*vec).push_back(e);
    std::fstream myfile;
    myfile.open("employes.bin",ios::out | ios::app |ios::binary);
    myfile<<*e;
    myfile.close();
    ui->lwEmployes->addItem(ebasewidget->getleName().toUpper()+" "+ebasewidget->getleLastName().toUpper());

}
void EmployeForm::config(std::vector<Employee*>*vect){
    vec = vect;
    for(unsigned int i=0;i<(*vec).size();i++)
        ui->lwEmployes->addItem(QString::fromStdString((*vec)[i]->getnom())+" "+QString::fromStdString((*vec)[i]->getprenom()));
}

EmployeForm::~EmployeForm()
{
    delete ui;
}
void EmployeForm::pbSupp_clicked(){
    int ind = ui->lwEmployes->currentRow();

    if(vec->size()!=1){
        ui->lwEmployes->takeItem(ind);
        vec->erase(vec->begin()+ind);
    }else{
        ui->lwEmployes->clear();
        vec->clear();
    }
    pbClear_clicked();
    std::fstream myfile;
    myfile.open("employes.bin",ios::out | ios::trunc |ios::binary);
    for(unsigned int i=0;i<vec->size();i++){
        myfile<<*(*vec)[i];
    }
    myfile.close();
}
void EmployeForm::pbMod_clicked(){
    int ind = ui->lwEmployes->currentRow();
    Employee *e = (*vec)[ind];
    e->setsalaire((float)employespwidget->getdsbSalaire());
    e->setdateEmbauche(Date(employespwidget->getsbDay(),employespwidget->getsbMonth(),employespwidget->getsbYear()));
    e->setSpecialite(employespwidget->getleSpecial().toUpper().toStdString());
    e->setretraite(employespwidget->getcbRetraite());
    e->setnom(ebasewidget->getleName().toUpper().toStdString());
    e->setprenom(ebasewidget->getleLastName().toUpper().toStdString());
    e->setdateNaiss(Date(ebasewidget->getsbDay(),ebasewidget->getsbMonth(),ebasewidget->getsbYear()));
    e->setadresse(ebasewidget->getleAdresse().toUpper().toStdString());
    e->setetat(ebasewidget->getpteEtat().toUpper().toStdString());

    ui->lwEmployes->clear();
    for(unsigned int i=0;i<(*vec).size();i++)
        ui->lwEmployes->addItem(QString::fromStdString((*vec)[i]->getnom())+" "+QString::fromStdString((*vec)[i]->getprenom()));

    std::fstream myfile;
    myfile.open("employes.bin",ios::out | ios::trunc |ios::binary);
    for(unsigned int i=0;i<vec->size();i++){
        myfile<<*(*vec)[i];
    }
    myfile.close();
}
void EmployeForm::pbClear_clicked()
{
    ui->lwEmployes->clearSelection();
    updateButton(-1);
    ui->leSearch->clear();
    ebasewidget->clear();
    employespwidget->clear();
}

void EmployeForm::on_pbSearch_clicked()
{
    search(ui->leSearch->text().toUpper());
}
