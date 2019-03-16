#ifndef CPP_LIBRARY_TEMPERATURE_H
#define CPP_LIBRARY_TEMPERATURE_H
class Temperature{
private:
    float gradosC;
public:
    void AsignarCentigrados(float gC);
    float ObtenerFahrenheit();
    float ObtenerCentigrados();
    float calcularFahrenheit(float gradosC);
};
#endif
