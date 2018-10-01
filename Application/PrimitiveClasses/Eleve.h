#ifndef ELEVE_H
#define ELEVE_H

#include "Personne.h"
#include <fstream>
#include <cstring>

class Eleve : public Personne
{
    public:
        Eleve(string="aaa@---.com",string="50194174",string="parent",string="aaa",string="bbb",int=0,int=0,int=2005,string="ccc",string="Rien");
        ~Eleve();
       friend ostream& operator<< (ostream&,const Eleve&);
       Eleve(const Eleve&);
       string getmail_parent(){return mail_parent;};
       string getnom_parent(){return nom_parent;};
       string getnum_parent(){return num_telph_parent;};

       void setmail_parent(string mail_parent){this->mail_parent=mail_parent;};
       void setnum_telph_parent(string num_telph_parent){this->num_telph_parent=num_telph_parent;};
       void setnom_parent(string nom_parent){this->nom_parent=nom_parent;};

       bool operator== (Eleve);
       friend fstream& operator<<(std::fstream&, Eleve&);
       friend fstream& operator>>(std::fstream&, Eleve&);
    private:
       string mail_parent;
       string num_telph_parent;
       string nom_parent;
};

#endif // ELEVE_H
