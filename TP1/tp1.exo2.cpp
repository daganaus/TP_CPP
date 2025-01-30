#include <iostream>
using namespace std;
int main() {
    cout << "boucle for :" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << "compteur:" << i+1 << endl;
    }
    cout << "boucle for :" << endl;
    int i = 0;
    while (i<10)
    {
        cout << "compteur:" << i+1 <<endl;
        i++;
    }
    cout << "boucle do...while :" << endl;
    i = 0;
    do
    {
        cout << "compteur:" << i+1 <<endl;
        i++;    /* code */
    } while (i<10);
    
    return 0;
}