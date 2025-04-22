#include "vecteur.hpp"
#include <iostream>
using namespace std;

int main(){
    Vecteur v1(3);
    Vecteur v2(4);
    Vecteur v3(3);
    Vecteur v4(2);
    int a,b,c;
    a = amis(v1,v2);
    b = amis(v1,v3);
    c = amis(v1,v4);
    v1.affiche();
    v2.affiche();
    v3.affiche();
    v4.affiche();
    cout << "v1 et v2" << a << endl;
    cout << "v1 et v3" << b << endl;
    cout << "v1 et v4" << c << endl;
    return 0;
} // main()