#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Date.h"
#include"Personne.h"
class Employee:public Personne
{
    public:
        Employee(string="aaa",string="bbb",int=0,int=0,int=0,string="ccc",string="Rien",float=0.0,int=0,int=0,int=0,string="Prof");
        ~Employee();
        void setsalaire(float salaire){this->salaire=salaire;};
        friend ostream& operator<< (ostream&,const Employee&);
         bool operator== (Employee);
        Employee (const Employee&);
        void setdateEmbauche(Date dateEmbauche){this->dateEmbauche=dateEmbauche;};
        void setretraite(bool Retraite){};
    protected:

    private:
        string Specialite;
        float salaire;
        Date dateEmbauche;
        bool Retraite;

};

#endif
