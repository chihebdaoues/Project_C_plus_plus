#ifndef ELEVES_H
#define ELEVES_H
#include"Salle.h"
#include"Eleve.h"
#include"Saisie.h"
#include<vector>
using namespace std;
class Classe
   {
       public:;
        Classe(int=0,string="Classe",int=1,int=1,int=0);
        virtual ~Classe();
        Classe(const Classe&);
        void Affiche_classe();
        void Ajouter_Eleve();
        void Supprimer_Eleve();
        int Rechercher_Eleve(Eleve );
        friend ostream& operator<< (ostream&,const Classe&);
        int getniveau(){return niveau;};
        string getnom_Classe(){return nom_Classe;};
        Salle getSalle(){return S;};
        int getnbr_eleve(){return nbr_eleves;};
        void setSalle(Salle S){this->S=S;};
        void setnbr_eleves(int nbr_eleves){this->nbr_eleves=nbr_eleves;};
        void setnom_Classe(string nom_Classe){this->nom_Classe=nom_Classe;};
        bool verif_Salle();
        void Changer_Salle();
    protected:
    private:
    int niveau;
    string nom_Classe;
    Salle S;
    int nbr_eleves;
  vector<Eleve*> Tab;

};


#endif // ELEVES_H
