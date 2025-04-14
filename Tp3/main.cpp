#include "vecteur.hpp"
#include <iostream>
using namespace std;

int main()
{
    double taba[4]={1.1,1.2,1.3,1.4};
    {
    Vecteur v3(4,taba);
    }
    for (int i=0; i<4; i++){
      //cout << *(v3.ptab+i) << endl;
      //cout << *(Vecteur::ptabSauv+i)  << endl;
      }

    // TP4
    Vecteur v1(4,taba);
    Vecteur v2(v1);
    Vecteur v3(4);
    v3=v1;
    cout << "v1 : "; 
    v1.affiche();
    cout << "v2 : ";
    v2.affiche(); 
    cout << "v3 : ";
    v3.affiche();
    cout << "v1 : ";

      return 0;
}
