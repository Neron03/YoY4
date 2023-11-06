#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double x, y, z, A = 0.5, B = 11, h = 0.3;

    cout << "\n  Х \t  Y(X) \t  Z(X) \n";

    for (x = A; x <= B + 0.1 * h; x += h)
    {
        y = 1;

        for (int i = 0; i < 2; i++)
        {
            y *= x;
        }

        y = sin(x) / y;

        z = cos(x) / x;

        cout << "x = " << x << " \t " << y << " \t " << z << endl;
    }

    return 0;
}