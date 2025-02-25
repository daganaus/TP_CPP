#include "vecteur.hpp"


double* Vecteur::psauv = 0;
// Constructeur par défaut
   Vecteur::Vecteur()
   {
      n = 2;
      ptab = new double[2];
      *ptab = 0.0;
      *(ptab+1) = 0.0;
      psauv = ptab;
   }

   Vecteur::Vecteur(int m)
   {
      n = m;
      ptab = new double[n];
      for(int i=0; i<n; i++)
      ptab[i] = 0.0;
      psauv = ptab;
   }



   Vecteur::Vecteur(int m, double* tabl)
{
   n = m;
   ptab = new double[n];
   for(int i=0; i<n; i++)
     ptab[i] = tabl[i];
   psauv = ptab;
}


// Destructeur
   Vecteur::~Vecteur()
   {
      delete[] ptab;
   }

// Accesseurs
   int Vecteur::getn()
   {
      return n;
   }

   double* Vecteur::getptab()
   {
      return ptab;
   }

   double Vecteur::getptab(int i)
   {
      return ptab[i];
   }

// Fonctions membres

   void Vecteur::affiche()
   {
      cout << "Vecteur de dimension " << n << " : ";
      for(int i=0; i<n; i++)
      cout << ptab[i] << " ";
      cout << endl;
   }