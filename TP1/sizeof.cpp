#include <iostream>

int main()
{
   char tabC0;
   char *tabC1;
   char **tabC2;
   char tabC3[20][10];
   char *tabC4[20];
   char& a = tabC0;
   std::cout <<  "-----------------------> char " << std::endl;
   std::cout << "char tabC0 " << sizeof(tabC0) << std::endl;
   std::cout << "char *tabC1 " << sizeof(tabC1) << std::endl;
   std::cout << "char **tabC2 " << sizeof(tabC2) << std::endl;
   std::cout << "char tabC3[20][10] " << sizeof(tabC3) << std::endl;
   std::cout << "char *tabC4[20] " << sizeof(tabC4) << std::endl;
   std::cout << "char& char " << sizeof(a) << std::endl;

   int tabI0;
   int *tabI1;
   int **tabI2;
   int tabI3[20][10];
   int *tabI4[20];
   int& b = tabI0;
   std::cout <<  "-----------------------> int " << std::endl;
   std::cout << "int tabI0 " << sizeof(tabI0) << std::endl;
   std::cout << "int *tabI1 " << sizeof(tabI1) << std::endl;
   std::cout << "int **tabI2 " << sizeof(tabI2) << std::endl;
   std::cout << "int tabI3[20][10] " << sizeof(tabI3) << std::endl;
   std::cout << "int *tabI4[20] " << sizeof(tabI4) << std::endl;
   std::cout << "int& int " << sizeof(b) << std::endl;

   double tabD0;
   double *tabD1;
   double **tabD2;
   double tabD3[20][10];
   double *tabD4[20];
   double& c = tabD0;
   double**& d = tabD2;
   std::cout <<  "-----------------------> double " << std::endl;
   std::cout << "double tabD0 " << sizeof(tabD0) << std::endl;
   std::cout << "double *tabD1 " << sizeof(tabD1) << std::endl;
   std::cout << "double **tabD2 " << sizeof(tabD2) << std::endl;
   std::cout << "double tabD3[20][10] " << sizeof(tabD3) << std::endl;
   std::cout << "double *tabD4[20] " << sizeof(tabD4) << std::endl;
   std::cout << "double& double " << sizeof(c) << std::endl;
   std::cout << "double**& double " << sizeof(d) << std::endl;
      
   return 0;
}

   
   
