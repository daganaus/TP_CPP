#include "vecteur.hpp"
#include <iostream>
using namespace std;

int main(){
    double tab[4]={1.1,1.2,1.3,1.4};
    Vecteur vecteur(4, tab); // On initialise systématiquement les objets
    vecteur.affiche();
    // Vecteur vecteur_defaut;
    // vecteur_defaut.affiche();
    /* ACCES AUX MEMBRES PRIVES
    vecteur.allocation(4);                      
    vecteur.~Vecteur();  // This code is not necessary because the destructor is called automatically when the object goes out of scope
    for(int i=0; i<4; i++){
        cout << *(vecteur.ptab+i) << endl;
    }*/

    Vecteur * ptrvecteur = new Vecteur(4, tab);
    ptrvecteur->affiche(); // équivalent à (*ptrvecteur).affiche();
    delete ptrvecteur;
    return 0;
} // main()