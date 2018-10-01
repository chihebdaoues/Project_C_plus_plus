#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date
{
    public:
        Date(int=0,int=0,int=0);
        virtual ~Date();
        int getjrs(){return this->jrs;};
        int getmois(){return this->mois;};
        int getannee(){return this->annee;};
        void setjrs(int jrs){this->jrs=jrs;};
         void setmois(int mois){this->mois=mois;};
          void setannee(int annee){this->annee=annee;};
        friend ostream& operator<< (ostream&,const Date&);
        friend istream& operator>> (istream &,const Date&);
        bool operator== (Date);
    protected:

    private:
        int jrs;
        int mois;
        int annee;
};

#endif // DATE_H
