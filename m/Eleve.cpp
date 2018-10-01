#include "Eleve.h"
Eleve::Eleve(string mail_parent,string num_telph_parent,string nom_parent,string nom,string prenom,int jrs1,int mois1,int annee1,string note,string adresse):Personne(nom,prenom,jrs1,mois1,annee1,note,adresse)
{
  this->mail_parent=mail_parent;
  this->num_telph_parent=num_telph_parent;
  this->nom_parent=nom_parent;
}

Eleve::~Eleve()
{

}
bool Eleve::operator==(Eleve E)
{if(this->nom==E.getnom() && this->prenom==E.getprenom() &&  this->dateNaiss==E.dateNaiss && this->etat==E.getetat() && this->adresse==E.geradresse() && this->mail_parent==E.getmail_parent() && this->nom_parent==E.nom_parent && this->num_telph_parent==E.num_telph_parent )
    return true;
 else return false;
}
/*ostream& operator<< (ostream &out,const Eleve &E)
{

    out<<E.nom<<endl;
    out<<E.prenom<<endl;
    out<<E.etat<<endl;
    out<<E.adresse<<endl;
    out<<E.dateNaiss<<endl;
    out<<E.nom_parent<<endl;
    out<<E.mail_parent<<endl;
    out<<E.num_telph_parent<<endl;
    return out;
}*/
Eleve::Eleve(const Eleve& E)
{
    this->nom=E.nom;
    this->prenom=E.prenom;
    this->etat=E.etat;
    this->dateNaiss=E.dateNaiss;
    this->adresse=E.adresse;
    this->nom_parent=E.nom_parent;
    this->mail_parent=E.mail_parent;
    this->num_telph_parent=E.num_telph_parent;

}
