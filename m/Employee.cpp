#include "Employee.h"
using namespace std;
Employee::Employee(string nom,string prenom,int jrs1,int mois1,int annee1,string adresse,string note,float salaire,int jrs,int mois,int annee,string Specialite):Personne(nom,prenom,jrs1,mois1,annee1,note,adresse)
{this->Specialite=Specialite;
this->salaire=salaire;
dateEmbauche=Date(jrs,mois,annee);
Retraite=false;
}

Employee::~Employee()
{
}
ostream& operator<< (ostream &out,const Employee &E)
{
    out<<E.nom<<endl;
    out<<E.prenom<<endl;
    out<<E.etat<<endl;
    out<<E.adresse<<endl;
    out<<E.dateNaiss<<endl;
    out<<E.Specialite<<endl;
    out<<E.dateEmbauche<<endl;
    out<<E.salaire<<endl;
    return out;
}
Employee::Employee (const Employee& E)
{
    this->nom=E.nom;
    this->prenom=E.prenom;
    this->dateNaiss=E.dateNaiss;
    this->adresse=E.adresse;
    this->etat=E.etat;
    this->Specialite=E.Specialite;
    this->salaire=E.salaire;
    this->dateEmbauche=E.dateEmbauche;
}
bool Employee::operator==(Employee E)
{if(this->nom==E.getnom() && this->prenom==E.getprenom() &&  this->dateNaiss==E.dateNaiss && this->etat==E.getetat() && this->adresse==E.geradresse() && this->dateEmbauche==E.dateEmbauche && this->salaire==E.salaire )
    return true;
 else return false;
}
