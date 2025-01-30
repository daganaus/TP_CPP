#include <iostream>
using namespace std;
int main()
{
  int tab[10];
  int *ptr;
  ptr = tab;
  for (int i = 0; i < 10; i++)
  {
    tab[i] = 1000 + i;
  }
  cout << "\nvaleur de ptr " << ptr;
  cout << "\nvaleur de &ptr " << &ptr;
  cout << "\nvaleur de *&ptr " << *&ptr << endl;

  cout << "\nvaleur de ptr+1 " << ptr + 1;
  cout << "\nvaleur de *ptr+1 " << *ptr + 1;
  cout << "\nvaleur de (*ptr)+1 " << (*ptr) + 1;
  cout << "\nvaleur de *(ptr+1) " << *(ptr + 1) << endl;

  cout << "\nvaleur de tab+1 " << tab + 1;
  cout << "\nvaleur de *tab+1 " << *tab + 1;
  cout << "\nvaleur de (*tab)+1 " << (*tab) + 1;
  cout << "\nvaleur de *(tab+1) " << *(tab + 1) << endl;

  cout << "\nvaleur de l'element 0 " << *ptr;
  cout << "\nvaleur de l'element 5 " << *(ptr + 5) << endl;
  return 0;
}

