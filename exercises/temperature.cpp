#include <iostream>
using namespace std;

class Temperature{
private:
    float gradosC;
public:
    Temperature(float grados)
    {
        this->gradosC = grados;
    }

    float ObtenerFahrenheit()
    {
        return calcularFahrenheit(this->gradosC);
    }

    float ObtenerCentigrados()
    {
        return gradosC;
    }

    float calcularFahrenheit(float gradosC)
    {
        return 9.0F/5.0F * gradosC + 32.0;
    }
};

void temperature()
{
    Temperature t(21.0);
    cout << "Grados Fº: " << t.ObtenerFahrenheit() << endl;
    cout << "Grados Cº: " << t.ObtenerCentigrados() << endl;
    cout << "Límite inferior: " << t.calcularFahrenheit(-30);
    cout << "Límite superior: " << t.calcularFahrenheit(100);
}