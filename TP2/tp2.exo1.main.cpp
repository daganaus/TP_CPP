#include <iostream>
#include "headers.hpp"
using namespace std;

//extern int func(int i = 0);

int main()
{
  double variable_entree = 3.14;
  double* ptr_entree = &variable_entree;
  cout<< "la valeur de la variable d'entrée est : " << variable_entree <<endl;
  cout<< "l'adresse de la variable d'entrée est : " << &variable_entree <<endl;
  test_par_valeur(variable_entree);
  test_par_adresse(ptr_entree);
  test_par_reference(variable_entree);
  func();
  return 0;
}



