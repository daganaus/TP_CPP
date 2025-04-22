#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
using namespace std;

class Vecteur
{
 private :
   int dimension; // dimension du vecteur
   double* ptab; // pointeur sur le tableau des composantes
   static double* ptabSauv; // pointeur sur le tableau des composantes sauvegardées
   void allocation(int);  // Fonction membre d'allocation privée peut être utilisée dans différents constructeurs
 public :
 // Constructeurs
    //Vecteur();
    Vecteur(int);   
    Vecteur(int, double*);
    Vecteur(const Vecteur&); // Constructeur de copie
    Vecteur& operator=(const Vecteur&); // Surcharge de l'opérateur d'affectation
 // Destructeur
    ~Vecteur(); 
 // Accesseurs
    int getn();
    double* getptab();
    double getptab(int);
 // Fonctions membres
    void affiche();
 // Fonctions amies
    friend int amis(const Vecteur&, const Vecteur&);

};




#endif // VECTEUR_HPP
