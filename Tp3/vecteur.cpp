#include "vecteur.hpp"


double* Vecteur::psauv = 0;

Vecteur::Vecteur()
{
   n = 1;
   ptab = new double;
   *ptab = 0.0;
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

 
