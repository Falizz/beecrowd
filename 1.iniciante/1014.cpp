#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int distancia_total;
    double combustivel_gasto;

    cin >> distancia_total >> combustivel_gasto;

    cout << fixed << setprecision(3) << distancia_total / combustivel_gasto << " km/l" << endl;

    return 0;
}