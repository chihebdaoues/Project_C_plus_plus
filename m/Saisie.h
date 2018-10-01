#ifndef SAISIE_H_INCLUDED
#define SAISIE_H_INCLUDED
#include"Date.h"
#include"Personne.h"
#include"Employee.h"
#include"Eleve.h"
#include"Employees.h"
#include"Salle.h"
#include"Classe.h"
#include<iostream>
#include<string>
using namespace std;
void Reception(int&);
Employee saisie_Employee();
Eleve saisie_Eleve();
/*void Ajouter_Employee(Employees&);
void Ajouter_Eleve(Eleves&);*/
void Modifier_Employee(Employee&);
void Modifier_Eleve(Eleve&);
/*void Supprimer_Employee(Employees&);
void Supprimer_Eleve(Eleves&);*/
#endif // SAISIE_H_INCLUDED
