#include <iostream>
#include <cmath>
#include "headers.hpp"
using namespace std;

int main()
{
  double z=3.14;
  test_par_valeur(z);
  cout << "apres test_par_valeur " << z <<"\n";
  cout << "adresse de z " << &z <<"\n";
  test_par_adresse(&z);
  cout << "apres test_par_adresse "<< z <<"\n";
  test_par_reference(z);
  cout << "apres test_par_reference "<< z <<"\n";
  double temp = 3*sqrt(z); // temp est une lvalue
                          // 3*sqrt(z) est une rvalue (temporaire)
  test_par_valeur(3*sqrt(z)); // prend en entrée une rvalue ou une lvalue
  test_par_adresse(&temp);// Ne prend que des lvalues en entrée
  test_par_reference(temp);// Ne prend que des lvalues en entrée
  increment_argument(z);
  affiche_argument(z);
  return 0;
}
