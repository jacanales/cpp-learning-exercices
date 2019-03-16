#include <iostream>
#include "multiples.h"
using namespace std;

int main()
{
    int lowValue = 0, highValue = 0;

    cout << "Valor inicial: ";
    cin >> lowValue;
    cout << "Valor final: ";
    cin >> highValue;

    printMultiples(lowValue, highValue);
}

void printMultiples(int low, int high)
{
    int i;

    for (i = low; i <= high; i++) {
        if (i % multiple == 0) {
            cout << i << endl;
        }
    }

    cout << "\n";
}