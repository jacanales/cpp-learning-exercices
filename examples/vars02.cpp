#include <iostream>
using namespace std;

void function_1();

void vars_definition()
{
    // var1 se supone definida en otro sitio a nivel global
    extern int var1;

    // Variable estática accesible solamente desde el propio método. Valor inicial = 0
    static int var2;

    // Declaración auto
    int var3 = 0;

    var1 += 2;

    cout << var1 << " " << var2 << " " << var3 << endl;
    function_1();
}

int var1 = 5;

void function_1()
{
    int var1 = 15;

    // Accesible solo en este bloque
    static int var2 = 5;

    var2 += 5;

    cout << var1 << " " << var2 << endl;
}
