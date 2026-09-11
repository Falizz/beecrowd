#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    double a, b, c;
    cin >> a >> b >> c;

    a *= 2;
    b *= 3;
    c *= 5;

    cout << fixed << setprecision(1) << "MEDIA = " << (a + b + c) / 10 << endl;

    return 0;
}