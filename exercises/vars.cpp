#include <iostream>
using namespace std;

int var1 = 50;

void vars()
{
    cout << var1 << endl;

    {
        int var1 = 100, var2 = 200;

        cout << var1 << " " << var2 << endl;

        {
            int var1 = 0;

            cout << var1 << " " << var2 << endl;
        }

        cout << var1 << " " << var2 << endl;
        cout << ::var1 << " " << var2 << endl;
    }

    cout << var1 << " " << endl;
}
