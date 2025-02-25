#include "vecteur.hpp"
#include <iostream>
using namespace std;

int main(){
    double tab[4]={1.1,1.2,1.3,1.4};
    Vecteur vecteur = Vecteur(4, tab);
    vecteur.affiche();
    //vecteur.~Vecteur();
    for(int i=0; i<4; i++){
        cout << *(vecteur.ptab+i) << endl;
    }
    return 0;
}