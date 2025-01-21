#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    {    
        int i = 0, j = 0;
        i++; // i = 1
        j++; // j = 1
        int m = i++; // m = 1, i = 2
        int n = ++j; // n = 2, j = 2
        cout << "i = " << i << " j = " << j << " m = " << m << " n = " << n << endl;
    }

    {   
        int x = 1;
        int y = 0;
        if (y!=x)
            {
                cout << "Test verifie"<< endl;
            }
        else
            {
                cout << "Test non verife" << endl;
            }
    }

    {
        int i, j, k;
            // suite des instructions attribuant,
            // entre autres, une valeur à i
        switch(i)
        {       
            case 0 : //exécution si i = 0
            j = 1;
            k = 2;
            break; // sortie du switch
            case 2 : //exécution si i = 0
            j = 3;
            k = 4;
            break; // sortie du switch
            default ://exec si i diff. de 0 et 2
            j = 0;  
            k = 0;
            break; // sortie du switch
        }
        cout << "j = " << j << "i = " << i << " k = " << k << endl;
    }


    return 0;
}