#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3)
    << "TRIANGULO: " << a * c / 2 << endl
    << "CIRCULO: " << 3.14159 * c * c << endl
    << "TRAPEZIO: " << (a + b) * c / 2 << endl
    << "QUADRADO: " << b * b << endl
    << "RETANGULO: "<< a * b << endl;

    return 0;
}