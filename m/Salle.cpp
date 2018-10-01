#include "Salle.h"

Salle::Salle(int num,int etat)
{
    this->num=num;
    this->etat=etat;
}

Salle::~Salle()
{

}
istream& operator>> (istream& in,Salle& S)
{

    in>>S.num;
    in>>S.etat;
    return in;
}
 ostream&  operator<< (ostream& out, const Salle &S)
 {
     out<<"Numero de la salle"<<endl;
     out<<S.num<<endl;
     if(S.etat==1)
     {out<<"Salle vide"<<endl;}
      else if(S.etat==2) {out<<"salle reservée"<<endl;}
               else {out<<"Salle endommagée"<<endl;}
return out;
 }
