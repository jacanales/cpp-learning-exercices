#include <iostream>
using namespace std;

void function_1();
void function_2();

extern int var;
extern int var2;

void globals()
{
    var++;
    var2++;
    cout << var << " - " << var2 << endl;
    function_1();
}

int var = 5, var2 = 5;

void function_1()
{
    var++;
    var2++;
    cout << var << " - " << var2 << endl;
    function_2();
}