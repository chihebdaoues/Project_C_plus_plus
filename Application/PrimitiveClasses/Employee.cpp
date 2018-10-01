#include "Employee.h"
Employee::Employee(string nom,string prenom,int jrs1,int mois1,int annee1,string adresse,string note,double salaire,int jrs,int mois,int annee,string Specialite):Personne(nom,prenom,jrs1,mois1,annee1,note,adresse)
{this->Specialite=Specialite;
this->salaire=salaire;
dateEmbauche=Date(jrs,mois,annee);
Retraite=false;
}

Employee::~Employee()
{
}

fstream& operator<<(std::fstream& file, Employee &E){
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

    strcpy (buff1, E.Specialite.substr(0,20).c_str());
    file.write(buff1,20);

    sprintf(buff1,"%lf",E.salaire);
    file.write(buff1,20);

    sprintf(buff3,"%d",E.dateEmbauche.getjrs());
    file.write(buff3,2);
    sprintf(buff3,"%d",E.dateEmbauche.getmois());
    file.write(buff3,2);
    sprintf(buff5,"%d",E.dateEmbauche.getannee());
    file.write(buff5,4);

    char r;
    sprintf(&r,"%d",E.Retraite);
    file.write(&r,1);

    return file;
}

fstream& operator>>(std::fstream& file , Employee &E){
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
    E.setSpecialite(string(buff1));
    file.read(buff1,20);
    E.setsalaire(atof(buff1));

    file.read(buff3,2);
    E.dateEmbauche.setjrs(atoi(buff3));
    file.read(buff3,2);
    E.dateEmbauche.setmois(atoi(buff3));
    file.read(buff5,4);
    E.dateEmbauche.setannee(atoi(buff5));

    char r;
    file.read(&r,1);
    E.setretraite((bool)r);
    return file;
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
