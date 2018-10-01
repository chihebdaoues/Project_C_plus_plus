#include "Eleve.h"
#include <QDebug>

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

fstream& operator<<(std::fstream& file, Eleve &E){
    char buff1[20];
    char buff2[100];
    char buff3[2];
    char buff4[50];
    char buff5[4];
    strcpy (buff1, E.nom.substr(0,20).c_str());
    file.write(buff1,20);
    strcpy (buff1, E.prenom.substr(0,20).c_str());
    file.write(buff1,20);

    strcpy (buff2, E.etat.substr(0,100).c_str());
    file.write(buff2,100);
    strcpy (buff4, E.adresse.substr(0,50).c_str());
    file.write(buff4,50);

    sprintf(buff3,"%d",E.dateNaiss.getjrs());
    file.write(buff3,2);
    sprintf(buff3,"%d",E.dateNaiss.getmois());
    file.write(buff3,2);
    sprintf(buff5,"%d",E.dateNaiss.getannee());
    file.write(buff5,4);

    strcpy (buff1, E.nom_parent.substr(0,20).c_str());
    file.write(buff1,20);
    strcpy (buff1, E.num_telph_parent.substr(0,20).c_str());
    file.write(buff1,20);
    strcpy (buff4, E.mail_parent.substr(0,50).c_str());
    file.write(buff4,50);
    return file;
}

fstream& operator>>(std::fstream& file , Eleve &E){
    char buff1[20];
    char buff2[100];
    char buff3[2];
    char buff4[50];
    char buff5[4];

    file.read(buff1,20);
    E.setnom(string(buff1));

    file.read(buff1,20);
    E.setprenom(string(buff1));

    file.read(buff2,100);
    E.setetat(string(buff2));

    file.read(buff4,50);
    E.setadresse(string(buff4));

    file.read(buff3,2);
    E.dateNaiss.setjrs(atoi(buff3));
    file.read(buff3,2);
    E.dateNaiss.setmois(atoi(buff3));
    file.read(buff5,4);
    E.dateNaiss.setannee(atoi(buff5));

    file.read(buff1,20);
    E.setnom_parent(string(buff1));
    file.read(buff1,20);
    E.setnum_telph_parent(string(buff1));
    file.read(buff4,50);
    E.setmail_parent(string(buff4));
    return file;
}
/*void Eleve::afficher(){
    cout<<nom<<endl;
    cout<<prenom<<endl;
    cout<<etat<<endl;
    cout<<adresse<<endl;
    cout<<dateNaiss<<endl;
    cout<<nom_parent<<endl;
    cout<<mail_parent<<endl;
    cout<<num_telph_parent<<endl;
}*/
ostream& operator<< (ostream &out,const Eleve &E)
{

    out<<E.nom<<endl;
    out<<E.prenom<<endl;
    out<<E.etat<<endl;
    out<<E.adresse<<endl;
    out<<E.dateNaiss<<endl;
    out<<E.nom_parent<<endl;
    out<<E.mail_parent<<endl;
    out<<E.num_telph_parent<<endl<<endl;
    return out;
}

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
