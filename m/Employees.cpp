#include "Employees.h"

Employees::Employees()
{   nbr_empl=0;
    cout<<"saisir le nbr d'employees"<<endl;
    cin>>nbr_empl;
    for(int i=0;i<nbr_empl;i++)
    {Employee* E=new Employee;
    *E=saisie_Employee();
    Tab.push_back(E);}

}

Employees::~Employees()
{
    for(unsigned int i=0;i<Tab.size();i++)
    {
    delete Tab[i];
    Tab.clear();
    }
}
void Employees::Ajouter_Employee()
{
    int ind,test;char rep;
  cout<<"cliquer sur 1 si vous voulez ajouter un Employee"<<endl;
  cin>>test;
  if(test==1)
  {Employee* F=new Employee;
  *F=saisie_Employee();
  cout<<"voulez vous ajouter l'employee a un indice precis"<<endl;
  do
  {cout<<"Choisir O si Oui ,N si Non :"<<endl;
  cin>>rep;}
  while (rep!='o' && rep!='O' && rep!='n' && rep!='N');
  if(rep=='o' || rep=='O')
  {     cout<<"saisir l'indice"<<endl;
        cin>>ind;
        Tab.insert(Tab.begin()+ind,F);}
   else Tab.push_back(F);}
}
void Employees::Supprimer_Employee()
{
    unsigned int ind;
    Tab.erase(Tab.begin()+ind);
}
int Employees::Recherche_Employee(Employee E)
{
    int i=0;
   bool test=false;
   do
    if(*Tab[i]==E) test=true;
    else i++;
   while(i<Tab.size() && test==false);
   return i;
}
