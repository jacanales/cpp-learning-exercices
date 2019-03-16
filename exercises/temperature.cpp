#include <iostream>
#include <iomanip>
#include "temperature.h"
using namespace std;

void Temperature::AsignarCentigrados(float gC)
{
    this->gradosC = gC;
}

float Temperature::ObtenerFahrenheit()
{
    return calcularFahrenheit(this->gradosC);
}

float Temperature::ObtenerCentigrados()
{
    return gradosC;
}

float Temperature::calcularFahrenheit(float gradosC)
{
    return 9.0F/5.0F * gradosC + 32.0;
}

void temperature()
{
    const int limInferior = -30;
    const int limSuperior = 100;
    const int incremento = 10;

    Temperature t;
    int gradosCent = limInferior;
    float gradosFahr = 0;

    cout << setiosflags(ios::fixed);

    while (gradosCent <= limSuperior)
    {
        t.AsignarCentigrados(gradosCent);
        gradosFahr = t.ObtenerFahrenheit();

        cout << setw(8) << gradosCent << " C"
             << setw(8) << setprecision(2) << gradosFahr << " F\n";

        gradosCent += incremento;
    }

    cout << "Grados Fº: " << t.ObtenerFahrenheit() << endl;
    cout << "Grados Cº: " << t.ObtenerCentigrados() << endl;
    cout << "Límite inferior: " << t.calcularFahrenheit(-30) << endl;
    cout << "Límite superior: " << t.calcularFahrenheit(100) << endl;
}