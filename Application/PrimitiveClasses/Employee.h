#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include"Personne.h"
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
class Employee:public Personne
{
    public:
        Employee(string="aaa",string="bbb",int=0,int=0,int=0,string="Rien",string="ccc",double=0.0,int=0,int=0,int=0,string="Prof");
        ~Employee();

        friend ostream& operator<< (ostream&,const Employee&);
        bool operator== (Employee);
        Employee (const Employee&);

        double getsalaire(){return this->salaire;}
        Date getdateEmbauche(){return this->dateEmbauche;}
        bool getretraite(){ return Retraite;}
        string getSpecialite(){ return Specialite;}

        void setsalaire(float salaire){this->salaire=salaire;}
        void setSpecialite(string sp){this->Specialite=sp;}
        void setdateEmbauche(Date dateEmbauche){this->dateEmbauche=dateEmbauche;}
        void setretraite(bool Retrait){ Retraite = Retrait;}
        friend fstream& operator<<(std::fstream&, Employee&);
        friend fstream& operator>>(std::fstream&, Employee&);
    protected:

    private:
        string Specialite;
        double salaire;
        Date dateEmbauche;
        bool Retraite;

};

#endif
