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
 // Constructeurs
    Vecteur();
    Vecteur(int);   
    Vecteur(int, double*);
 // Destructeur
    ~Vecteur(); 
 // Accesseurs
    int getn();
    double* getptab();
    double getptab(int);
 // Fonctions membres
    void affiche();

};




#endif // VECTEUR_HPP
