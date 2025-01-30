#include <iostream>
using namespace std;

int tab[3][4]={{100,102,104,106},
               {200,202,204,206},
               {300,302,304,306}};
int main() 
{   
   int *ptr;
   ptr=tab[2];
   cout<<"\nvaleur de tab[2] "<<tab[2];
   cout<<"\nvaleur de &tab[2][0] "<<&tab[2][0];
   cout<<"\nvaleur de ptr "<<ptr;
   cout<<"\nvaleur de *ptr "<<*ptr;
   cout<<"\nvaleur de &ptr "<<&ptr<<endl;
   
   cout<<"\nvaleur de tab[2][1] "<<tab[2][1];
   cout<<"\nvaleur de &tab[2][1] "<<&tab[2][1];
   cout<<"\nvaleur de ptr+1 "<<ptr+1;
   cout<<"\nvaleur de *(ptr+1) "<<*(ptr+1)<<endl;
   
   cout<<"\nvaleur de tab "<<tab;
   cout<<"\nvaleur de tab[0] "<<tab[0];
   cout<<"\nvaleur de &tab[0][0] "<<&(tab[0][0])<<endl;
   
   cout<<"\nvaleur de tab+1 "<<tab+1;
   cout<<"\nvaleur de &tab[1] "<<&tab[1];
   cout<<"\nvaleur de tab[1] "<<tab[1];
   cout<<"\nvaleur de &tab[1][0] "<<&tab[1][0];
   cout<<"\nvaleur de *(tab+1) "<<*(tab+1); 
   cout<<"\nvaleur de tab[1][0] "<<tab[1][0]<<endl;
   
   cout<<"\nvaleur de **(tab+1) "<<**(tab+1);
   cout<<"\nvaleur de *(*tab+1) "<<*(*tab+1)<<endl;
   
   
   return 0;
}
