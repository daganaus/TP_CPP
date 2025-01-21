#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double z=0;
  test_par_valeur(z);
  cout << "apres test_par_valeur " << z <<"\n";
  cout << "adresse de z " << &z <<"\n";
  test_par_adresse(&z);
  cout << "apres test_par_adresse "<< z <<"\n";
  test_par_reference(z);
  cout << "apres test_par_reference "<< z <<"\n";
  test_par_valeur(3*sqrt(z));
  test_par_adresse(&3*sqrt(z));
  test_par_reference(3*sqrt(z));
  return 0;
}
