#include <iostream>
using namespace std;

void flujo()
{
    int n = 0, estado = 0;

    cout << "Dato: (entero, cadena, Cmd + z, etc): ";
    cin >> n;

    estado = cin.rdstate();

    if (estado == ios::goodbit) {
        cout << "Correcto" << endl;
    }

    if ((estado & ios::eofbit) == ios::eofbit) {
        cout << "\nFin de la entrada" << endl;
    }

    if ((estado & ios::failbit) == ios::failbit) {
        cerr << "\nDato incorrecto" << endl;
    }

    if ((estado & ios::badbit) == ios::badbit) {
        cerr << "\nError fatal" << endl;
    }
}