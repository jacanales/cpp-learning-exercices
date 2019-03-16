#include <iostream>
#include <cmath>
using namespace std;

float v;

void globalOperator()
{
    int v = 7;
    ::v = 10.5;

    cout << "Variable local v = " << v << endl;
    cout << "Variable global v = " << ::v << endl;
}

void sizeofOperator()
{
    int a = 0, t = 0;
    t = sizeof a;
    cout << "El tamaño del entero 'a' es: " << t << " bytes\n"
         << "El tamaño de entero es: " << sizeof(int) << " bytes\n";
}

void addressOperataor()
{
    int a = 7;
    cout << "Dirección de memoria = " << &a
         << ", dato = " << a << '\n';
}

void pointerOperator()
{
    int *px, x = 7, y = 0;
    px = &x;
    y = *px;

    cout << "Dirección de memoria = " << &x << ", dato = " << x << '\n';
    cout << "Dirección de memoria = " << px << ", dato = " << *px << '\n';
}

void referenceOperator()
{
    int y = 10;
    int& x = y;

    x++;
    cout << y << '\n';
    cout << x << '\n';
}

void typeCasting()
{
    int i = 9;
    double r = 0;

    r = sqrt(static_cast<double>(i)/2);
    cout << "La raíz cuadrada es " << r << '\n';
}

void exercices()
{
    enum vehiculos {seat, peugeout, mercedes};

    int a = 10, b = 3, c, d, e;
    float x, y;
    x = a / b;
    c = a < b && 25;
    d = a + b++;
    e = ++a - b;
    y = static_cast<float>(a) / b;

    cout << "Valor de x: " << x << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de d: " << d << endl;
    cout << "Valor de e: " << e << endl;
    cout << "Valor de y: " << y << endl;
}

void operators()
{
    cout << "OPERATORS\n";
    globalOperator();
    sizeofOperator();
    addressOperataor();
    pointerOperator();
    referenceOperator();
    typeCasting();
    exercices();
}
