#ifndef EMPLOYEES_H
#define EMPLOYEES_H
#include<vector>
#include"Saisie.h"
#include"Employee.h"
using namespace std;

class Employees
{
    public:
        Employees();
        virtual ~Employees();
        Employees(const Employees&);
        void Ajouter_Employee();
        void Supprimer_Employee();
        int Recherche_Employee(Employee);
    protected:
    int nbr_empl;
    vector<Employee*>Tab;
};

#endif // EMPLOYEES_H
