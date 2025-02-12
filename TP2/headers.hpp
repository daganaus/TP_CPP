#ifndef HEADERS_HPP
#define HEADERS_HPP

// Include necessary libraries
#include <iostream>
#include <string>

// Function declarations
int func(int i = 0);
void test_par_valeur(double arg_entree = 0.0);
void test_par_adresse(double *ptr_entree = nullptr);
void test_par_reference(double &);
void increment_argument(double &);
void affiche_argument(double);
unsigned* TabInt(unsigned tab[], unsigned size);
#endif // HEADERS_HPP