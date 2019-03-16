#include <iostream>
using namespace std;

extern int var;
static int var2;

void function_2()
{
    var++;
    var2++;
    cout << var << " - " << var2 << endl;
}