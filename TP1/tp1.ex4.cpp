#include <iostream>

using namespace std;

char tab[20][10];
int main()
{
char *ptr;
ptr = tab[3];
;
cout << "\nvaleur de *ptr " << *ptr << endl;
return 0;
}