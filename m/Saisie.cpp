#include "Saisie.h"
void Reception(int& a)
{
    cout<<" ******************************** "<<endl;;
    cout<<"\n"<<endl;
    cout<<" INSCRIPTION "<<endl;
    cout<<" Saisir le type"<<endl;
    cout<<"\n"<<endl;
    cout<<"choisir 1 si vous allez ajouter un employee"<<endl;
    cout<<"choisir 2 si vous aller ajouter un eleve"<<endl;
    do
        cin>>a;
    while (a!=1 && a!=2);
}

Employee saisie_Employee()
{       string nom,prenom,adresse,note,specialite;
        float salaire;
        int jrs,mois,annee,jrs1,mois1,annee1;
        cout<<"saisir le nom"<<endl;
        cin>>nom;
        cout<<"saisir le prenom"<<endl;
        cin>>prenom;
        cout<<"saisir la date de naissance"<<endl;
        cin>>jrs>>mois>>annee;
        cout<<"saisir la date de pris en Embauche"<<endl;
        cin>>jrs1>>mois1>>annee1;
        cout<<"saisir l'adresse"<<endl;
        cin>>adresse;
        cout<<"saisir la specialité"<<endl;
        cin>>specialite;
        cout<<"saisir le salaire"<<endl;
        cin>>salaire;
        cout<<"saisir une information supplimentaire "<<endl;
        cin>>note;
        Employee E(nom,prenom,jrs,mois,annee,adresse,note,salaire,jrs1,mois1,annee1,specialite);
        cout<<"**************************************************************************"<<endl;
        cout<<E;
        return E;
}
 Eleve saisie_Eleve()
{

        string nom;
        string prenom;
        string note;
        string adresse;
        unsigned int jrs;int mois;int annee;
        string e_mail;
        string nom_parent;
        string num_telph_parent;
        cout<<"saisir l'@ mail du parent"<<endl;
        cin>>e_mail;
        cout<<"saisir le prenom du parent"<<endl;
        cin>>nom_parent;
        cout<<"saisir le numero du telephone du parent"<<endl;
        cin>>num_telph_parent;
        cout<<"saisir le nom de l eleve"<<endl;
        cin>>nom;
        cout<<"saisir le prenom de l eleve"<<endl;
        cin>>prenom;
        cout<<"saisir la date de naissance"<<endl;;
        cin>>jrs>>mois>>annee;
        cout<<"saisir l'adresse"<<endl;
        cin>>adresse;
        cout<<"saisir une information supplimentaire"<<endl;
        cin>>note;

         Eleve G(e_mail,nom_parent,num_telph_parent,nom,prenom,jrs,mois,annee,adresse,note);
        cout<<"**************************************************************************"<<endl;
        return G;
}
void Modifier_Eleve(Eleve& G)
{
        string nom;
        string prenom;
        string note;
        string adresse;
        unsigned int jrs;int mois;int annee;
        string e_mail;
        string nom_parent;
        string num_telph_parent;
    cout<<"saisir le nouveau nom"<<endl;
    cin>>nom;
    G.setnom(nom);
    cout<<"saisir le nouveau prenom"<<endl;
    cin>>prenom;
    G.setprenom(prenom);
    cout<<"saisir des information supplimentaire"<<endl;
    cin>>note;
    G.setetat(note);
    cout<<"saisir la nouvelle date de naissance"<<endl;
    cin>>jrs>>mois>>annee;
    Date dateNaiss(jrs,mois,annee);
    G.setdateNaiss(dateNaiss);
    cout<<"saisir la nouvelle adresse"<<endl;
    cin>>adresse;
    G.setadresse(adresse);
    cout<<"saisir l'@ mail du parent"<<endl;
    cin>>e_mail;
    G.setmail_parent(e_mail);
    cout<<"saisir le nom du parent"<<endl;
    cin>>nom_parent;
    G.setnom_parent(nom_parent);
    cout<<"saisir le numero du telephone du parent"<<endl;
    cin>>num_telph_parent;
    G.setnum_telph_parent(num_telph_parent);
}
void Modifier_Employee(Employee& E)
{

   string nom,prenom,adresse,note;
    float salaire;
    int jrs,mois,annee,jrs1,mois1,annee1;
        cout<<"saisir le nouveau nom"<<endl;
        cin>>nom;
        E.setnom(nom);
        cout<<"saisir le nouveau prenom"<<endl;
        cin>>prenom;
        E.setprenom(prenom);
        cout<<"saisir la nouvelle date de naissance"<<endl;
        cin>>jrs>>mois>>annee;
        Date dateNaiss(jrs,mois,annee);
        E.setdateNaiss(dateNaiss);
        cout<<"saisir la nouvelle date de pris en Embauche"<<endl;
        cin>>jrs1>>mois1>>annee1;
        Date dateEmbauche(jrs1,mois1,annee1);
        cout<<"saisir la nouvelle adresse"<<endl;
        cin>>adresse;
        E.setadresse(adresse);
        cout<<"saisir le nouveau salaire"<<endl;
        cin>>salaire;
        E.setsalaire(salaire);
        cout<<"saisir une information supplimentaire "<<endl;
        cin>>note;
        E.setetat(note);
}


