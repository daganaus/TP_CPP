#include <iostream>

int main()
{
   int *a = new int[5];
   for (int i=0; i<5; i++)
     a[i] = i;
   int *b = new int[5];
   for (int i=0; i<5; i++)
	b[i] = i+10;
   int **m = new int*[2];
   m[0]=a;
   m[1]=b;
 

   for (int i=0; i<2 ; i++)
     for (int j=0; j<4; j++)
       std::cout << "m[" << i << "][" << j << "] = " << m[i][j] << std::endl;
   
   int tab[2][4];
   for (int i=0; i<2 ; i++)
     for (int j=0; j<4; j++)
       tab[i][j] = j + 10*i;
       
   for (int i=0; i<2 ; i++)
     for (int j=0; j<4; j++)
       std::cout << "tab[" << i << "][" << j << "] = " << tab[i][j] << std::endl;
   
//   tab[0][0] = 36;
   
   std::cout << "*(*tab) = tab[0][0]... " << *(*tab) << std::endl;
   std::cout << "*tab[0] = tab[0][0]... " << *tab[0] << std::endl;
   std::cout << "*tab[1] = tab[1][0]... " << *tab[1] << std::endl;
   
   return 0; 
}
