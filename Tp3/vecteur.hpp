#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
using namespace std;

class Vecteur
{
 public :
   int n;
   double* ptab;
   static double* psauv;
 public :
   Vecteur();
   Vecteur(int);   
   Vecteur(int, double*);
};




#endif // VECTEUR_HPP
