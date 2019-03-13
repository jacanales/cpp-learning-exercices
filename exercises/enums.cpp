#include <iostream>
using namespace std;

enum colores
{
    azul, amarillo, rojo, verde, blanco, negro
};

void enums() {
    colores color;

    cout << "Elige un color: ";
    int ncolor;
    cin >> ncolor;
    color = static_cast<colores>(ncolor);
    cout << color << endl;
}