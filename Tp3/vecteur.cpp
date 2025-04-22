#include "vecteur.hpp"

double* Vecteur::ptabSauv = nullptr; // Initialisation du pointeur statique à NULL

void Vecteur::allocation(int dim)
{
   ptab = new double[dim];
   ptabSauv = new double[dim];
   if (ptab == NULL || ptabSauv == NULL)
   {
      cerr << "Erreur d'allocation";
      exit(1);
   }
   dimension = dim;
}  //allocation(int dim)


// Constructeurs
   // Vecteur::Vecteur() // Inutile car on considère qu'il est necessaire de préciser la dimension du vecteur
   // {
   //    dimension= 2;
   //    allocation(dimension);
   //    *ptab = 0.0;
   //    *(ptab+1) = 0.0;
   //    ptabSauv = ptab;
   // }//Vecteur::Vecteur()
   //!\ plus de constructeurs par défaut

Vecteur::Vecteur(int dim)
   {
      //dimension= m; redondant car on a déjà dans allocation
      allocation(dim);
      for(int i=0; i<dimension; i++)
      ptab[i] = 0.0;
      ptabSauv = ptab;
   }//Vecteur::Vecteur(int m)



Vecteur::Vecteur(int dim, double* tabl)
   {
      allocation(dim);
      for(int i=0; i<dimension; i++)
      ptab[i] = tabl[i];
      ptabSauv = ptab;
   }  //Vecteur::Vecteur(int m, double* tabl)  // à la fin d'un définition on rappelle en commentaire l'entête de la fonction

Vecteur::Vecteur(const Vecteur& v)
   {
      allocation(v.dimension);
      for(int i=0; i<dimension; i++)
      ptab[i] = v.ptab[i];
      ptabSauv = ptab;
   }  //Vecteur::Vecteur(const Vecteur& v) // Constructeur de copie

//!\ On ne peut pas faire un constructeur de copie avec un tableau statique, car il n'est pas possible de faire une copie de tableau statique

Vecteur& Vecteur::operator=(const Vecteur& v){
   if (this != &v) // on ne fait rien si on se copie soi-même
   {
      delete[] ptab; // on libère l'espace mémoire de l'ancien tableau
      allocation(v.dimension); // on alloue un nouveau tableau
      for(int i=0; i<dimension; i++)
         ptab[i] = v.ptab[i]; // on copie les valeurs du tableau passé en paramètre
   }
   return *this;
}

// Destructeur
Vecteur::~Vecteur()
   {  
      if (ptabSauv == ptab){
         ptabSauv = nullptr; // on remet le pointeur à NULL
      }
      delete[] ptab;
      cout << "Destruction du vecteur de dimension " << dimension << endl;
   }  //Vecteur::~Vecteur()

// Accesseurs
int Vecteur::getn()
{
   return dimension;
}  //Vecteur::getn()

double* Vecteur::getptab()
{
   return ptab;
}  //Vecteur::getptab()

double Vecteur::getptab(int i)
{
   return ptab[i];
}  //Vecteur::getptab(int i)

// Fonctions membres

void Vecteur::affiche()
   {
      cout << "Vecteur de dimension " << dimension << " : ";
      for(int i=0; i<dimension; i++){
         cout << "\n" <<ptab[i] << " ";
         cout << endl;}
   }  //Vecteur::affiche()

// Fonctions amies

int amis(const Vecteur& v1, const Vecteur& v2){
   if (v1.dimension == v2.dimension){
      return 0; // les vecteurs ont la même dimension
   }
   if (v1.dimension > v2.dimension){
      return 1; // le premier vecteur est plus grand
   }
   if (v1.dimension < v2.dimension){
      return -1; // le deuxième vecteur est plus grand
   }
   cerr << "Erreur" << endl;
   return -2; // erreur
}