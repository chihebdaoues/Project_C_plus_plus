#ifndef PERSONNE_H
#define PERSONNE_H
#include"Date.h"
#include<string>
using namespace std;

class Personne
{
    public:
        Personne(string="aaa",string="bbb",int=0,int=0,int=0,string="ccc",string="Rien");
        virtual ~Personne();
       string getnom(){return nom;};
       string getprenom(){return prenom;};
       string getetat(){return etat;};
       string geradresse(){return adresse;};
       int getjrsNaiss(){return dateNaiss.getjrs();};
       int getmoisNaiss(){return dateNaiss.getmois();};
       int getanneeNaiss(){return dateNaiss.getannee();};
       void setnom(string nom){this->nom=nom;};
       void setprenom(string prenom){this->prenom=prenom;};
       void setetat(string etat){this->etat=etat;};
       void setadresse(string adresse){this->adresse=adresse;};
       void setdateNaiss(Date dateNaiss){   this->dateNaiss=dateNaiss;};
    protected:
        string nom;
        string prenom;
        Date dateNaiss;
        string etat;
        string adresse;
};

#endif
