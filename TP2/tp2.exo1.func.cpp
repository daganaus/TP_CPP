#include <iostream>
#include "headers.hpp"
using namespace std;

int func (int i)
{
  cout<< "compile correctement" <<endl;
  return 0;
}

void test_par_valeur(double arg_recu)
{
  double* ptr = &arg_recu;
  cout<< "la valeur de l'argument reçu en entrée est : " << arg_recu <<endl;
  cout<< "la valeur de la variable locale est : " << *ptr <<endl;
  cout<< "l'argument reçu a pour adresse : " << &arg_recu <<endl;
}

void test_par_adresse(double* ptr_entree)
{

  cout<< "la valeur de l'argument reçu en entrée est : " << *ptr_entree <<endl;
  cout<< "l'argument reçu a pour adresse : " << ptr_entree <<endl;
}

void test_par_reference(double& ref_entree)
{
  cout << "la valeur de l'entrée est : " << ref_entree << endl;
  cout << "l'adresse de l'entrée est : " << &ref_entree << endl;
}

void increment_argument(double& arg)
{
  arg++;
}

void affiche_argument(double arg)
{
  cout << "la valeur de l'argument est : " << arg << endl;
}