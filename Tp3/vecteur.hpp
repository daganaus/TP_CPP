#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
using namespace std;

class Vecteur
{
 private :
   int dimension; // dimension du vecteur
   double* ptab; // pointeur sur le tableau des composantes
   static double* psauv; // pointeur sur le tableau des composantes sauvegardées
   void allocation(int);  // Fonction membre d'allocation privée peut être utilisée dans différents constructeurs
 public :
 // Constructeurs
    //Vecteur();
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
