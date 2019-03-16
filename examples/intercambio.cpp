#include <iostream>
using namespace std;

void intercambio(int *, int *);
void intercambioReference(int&, int&);

void intercambiar()
{
    int a = 20, b = 30;
    int c = 20, d = 30;
    intercambio(&a, &b);
    intercambioReference(c, d);

    cout << "a es " << a << " y b es " << b << endl;
    cout << "c es " << c << " y d es " << d << endl;
}

void intercambio(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void intercambioReference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}