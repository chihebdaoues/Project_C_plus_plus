#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    stackedWid= new QStackedWidget;
    startWid = new StartForm;
    eleveWid = new EleveForm;
    employeWid = new EmployeForm;
    classeWid = new ClasseForm;
    clubWid = new ClubForm;
    stackedWid->addWidget(startWid);
    stackedWid->addWidget(eleveWid);
    stackedWid->addWidget(classeWid);
    stackedWid->addWidget(employeWid);
    stackedWid->addWidget(clubWid);
    stackedWid->setCurrentIndex(0);

    connect(startWid,SIGNAL(switchScreen(int)),this,SLOT(switchScreen(int)));

    connect(eleveWid,SIGNAL(goBackScreen()),this,SLOT(goBackScreen()));
    connect(classeWid,SIGNAL(goBackScreen()),this,SLOT(goBackScreen()));
    connect(employeWid,SIGNAL(goBackScreen()),this,SLOT(goBackScreen()));
    connect(clubWid,SIGNAL(goBackScreen()),this,SLOT(goBackScreen()));

    ui->setupUi(this);
    setCentralWidget(stackedWid);
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    statusBar()->showMessage("Configuration");
    config();
    statusBar()->showMessage("Welcome, "+QDateTime::currentDateTime().toString());
}
void MainWindow::switchScreen(int index){
    stackedWid->setCurrentIndex(index);
}
void MainWindow::goBackScreen(){
    stackedWid->setCurrentIndex(0);
}
void MainWindow::config(){
    std::fstream myfile;
    //on commence par les eleves
    statusBar()->showMessage("chargement des employes");
    myfile.open("eleves.bin", ios::in | ios::out | ios::app |ios::binary);
    if(myfile.is_open()){
        myfile.seekg (0, ios::end);
        long end = myfile.tellg();
        myfile.seekg(0,ios::beg);
        while(myfile.tellg()<end && myfile.tellg()!=-1){
            Eleve *z = new Eleve;
            myfile>>*z;
            vectEleves.push_back(z);
        }
        eleveWid->config(&vectEleves);
    }
    myfile.close();
    //puis les employes
    statusBar()->showMessage("chargement des employes");
    myfile.open("employes.bin", ios::in | ios::out | ios::app |ios::binary);
    if(myfile.is_open()){
        myfile.seekg (0, ios::end);
        long end = myfile.tellg();
        myfile.seekg(0,ios::beg);
        while(myfile.tellg()!=-1 && myfile.tellg() < end ){
            Employee *z = new Employee;
            myfile>>*z;
            vectEmployes.push_back(z);
        }
        employeWid->config(&vectEmployes);
    }
    myfile.close();
}
MainWindow::~MainWindow()
{
    delete ui;
}
