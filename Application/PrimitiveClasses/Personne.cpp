#include "Personne.h"

Personne::Personne(string nom,string prenom,int jrs,int mois,int annee,string adresse,string etat)
{
this->nom=nom;
this->prenom=prenom;
dateNaiss=Date(jrs,mois,annee);
this->etat=etat;
this->adresse=adresse;
}

Personne::~Personne()
{

}
