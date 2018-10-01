#include "Date.h"

Date::Date(int jrs ,int mois ,int annee)
{
 this->jrs=jrs;
 this->mois=mois;
 this->annee=annee;
}
Date::~Date()
{

}
bool  Date::operator==(Date D)
{
    if (this->jrs==D.getjrs() && this->mois==D.getmois() && this->annee==D.getannee())
        return true;
    else return false;
}

 ostream& operator<< (ostream &out,const Date &D)
 {
     out<<D.jrs<<"/"<<D.mois<<"/"<<D.annee;
     return out;
 }
 istream& operator>> (istream& in,const Date& D)
 {
     in>>D.jrs;
     in>>D.mois;
     in>>D.annee;
     return in;
 }
