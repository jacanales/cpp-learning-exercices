#include <iostream>
#include "funciones.h"
using namespace std;

void funciones()
{
    int n = 10;
    par_impar(n);
    positivo_negativo(n);
    cout << "Cuadrado de " << n << " = " << cuadrado(n) << endl;
    cout << "Cubo de " << n << " = " << cubo(n) << endl;
    cout << "\nContar hasta tres: ";
    cout << contar() << " " << contar() << " " << contar() << endl;
}

void par_impar(int n)
{
    cout << n << " es " << ((n % 2 == 0) ? "par" : "impar") << endl;
}

void positivo_negativo(int n)
{
    cout << n << " es " << ((n >= 0) ? "positivo" : "negativo") << endl;
}

int cuadrado(int n)
{
    return n * n;
}

int cubo (int n)
{
    return n * n * n;
}

int contar(void)
{
    static int n = 1;
    return n++;
}