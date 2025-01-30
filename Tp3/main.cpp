#include "vecteur.hpp"
#include <iostream>
using namespace std;

int main()
{
   double taba[4]={1.1,1.2,1.3,1.4};
     {
	Vecteur v3(4,taba);
     }
   
   for (int i=0; i<4; i++)
     //cout << *(v3.ptab+i) << endl;
     cout << *(Vecteur::psauv+i) << endl;
   return 0;
}

 
