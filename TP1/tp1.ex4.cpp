#include <iostream>

using namespace std;

char tab[20][10];
int main()
{
    char *ptr;
    ptr = tab[3];
    cout << "valeur de *ptr " << (int)*ptr << endl;
    return 0;
}