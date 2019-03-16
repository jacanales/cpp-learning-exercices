#include <iostream>
#include <cmath>
using namespace std;

double sumar(int x, int y)
{
    return x + y;
}

double average(int x, int y, int z, int v)
{
    double resultado = 0;
    int suma = x + y + z + v;

    resultado = (double) suma/ 4;

    return resultado;
}

double calcular(double a, double b, double c)
{
    double resultado = 0;

    resultado = (pow(b, 2) - (4 * a * c)) / (2 * a);

    return resultado;
}

void aritmerica()
{
    int dato1, dato2;
    double resultado;

    dato1 = 20;
    dato2 = 10;

    // Suma
    resultado = sumar(dato1, dato2);
    cout << dato1 << " + " << dato2 << " = " << resultado << endl;

    resultado = average(1, 2, 1, 1);
    cout << "Average: " << resultado << endl;

    resultado = calcular(1, 5, 2);
    cout << "Calcular: " << resultado << endl;
}
