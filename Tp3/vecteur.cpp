#include "vecteur.hpp"

void Vecteur::allocation(int dim)
{
   ptab = new double[dim];
   psauv = new double[dim];
   if (ptab == NULL || psauv == NULL)
   {
      cerr << "Erreur d'allocation";
      exit(1);
   }
   dimension = dim;
}  //allocation(int dim)

double* Vecteur::psauv = 0;
// Constructeurs
   // Vecteur::Vecteur() // Inutile car on considère qu'il est necessaire de préciser la dimension du vecteur
   // {
   //    dimension= 2;
   //    allocation(dimension);
   //    *ptab = 0.0;
   //    *(ptab+1) = 0.0;
   //    psauv = ptab;
   // }//Vecteur::Vecteur()
   //!\ plus de constructeurs par défaut

   Vecteur::Vecteur(int dim)
   {
      //dimension= m; redondant car on a déjà dans allocation
      allocation(dim);
      for(int i=0; i<dimension; i++)
      ptab[i] = 0.0;
      psauv = ptab;
   }//Vecteur::Vecteur(int m)



   Vecteur::Vecteur(int dim, double* tabl)
   {
      allocation(dim);
      for(int i=0; i<dimension; i++)
      ptab[i] = tabl[i];
      psauv = ptab;
   }  //Vecteur::Vecteur(int m, double* tabl)  // à la fin d'un définition on rappelle en commentaire l'entête de la fonction


// Destructeur
   Vecteur::~Vecteur()
   {
      delete[] ptab;
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
      for(int i=0; i<dimension; i++)
      cout << ptab[i] << " ";
      cout << endl;
   }  //Vecteur::affiche()