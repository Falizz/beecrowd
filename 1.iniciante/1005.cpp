#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    double a, b;
    cin >> a >> b;

    a *= 3.5;
    b *= 7.5;

    cout << fixed << setprecision(5) << "MEDIA = " << (a + b) / 11.0 << endl;

    return 0;
}