//===================================================
// Name        : tp2.exo2.cpp
// Author      : Swann
// Version     : 1.0
// Description : Allocation dynamique
//===================================================
#include <iostream>
#include "headers.hpp"
using namespace std;

//extern int func(int i = 0);

int main()
{
    unsigned N ;
    cout << "Entrez la taille du tableau : ";
    cin >> N;
    unsigned* tab = new unsigned[N];
    tab = TabInt(tab, N);
    for (unsigned i = 0; i < N; i++)
    {
        cout << tab[i] << " ";
    }
    delete tab;
    func();
    return 0;
}



