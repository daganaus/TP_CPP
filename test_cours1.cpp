#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    int* p = 0;
    cout << "p = " << p << endl;
    int x = 5;
    p = &x;
    cout << "p = " << p << endl;

    int tab[3][4]={{100,102,104,106},
                    {200,202,204,206},
                    {300,302,304,306}};

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
    cout<<"\nvaleur de *ptr+1 "<<*ptr+1<<endl;
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

    // {    
    //     int i = 0, j = 0;
    //     i++; // i = 1
    //     j++; // j = 1
    //     int m = i++; // m = 1, i = 2
    //     int n = ++j; // n = 2, j = 2
    //     cout << "i = " << i << " j = " << j << " m = " << m << " n = " << n << endl;
    // }

    // {   
    //     int x = 1;
    //     int y = 0;
    //     if (y!=x)
    //         {
    //             cout << "Test verifie"<< endl;
    //         }
    //     else
    //         {
    //             cout << "Test non verife" << endl;
    //         }
    // }

    // {
    //     int i, j, k;
    //         // suite des instructions attribuant,
    //         // entre autres, une valeur à i
    //     switch(i)
    //     {       
    //         case 0 : //exécution si i = 0
    //         j = 1;
    //         k = 2;
    //         break; // sortie du switch
    //         case 2 : //exécution si i = 0
    //         j = 3;
    //         k = 4;
    //         break; // sortie du switch
    //         default ://exec si i diff. de 0 et 2
    //         j = 0;  
    //         k = 0;
    //         break; // sortie du switch
    //     }
    //     cout << "j = " << j << "i = " << i << " k = " << k << endl;
    // }


    return 0;
}