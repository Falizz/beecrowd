#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int valor;
    cin >> valor;

    cout << valor << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    for (int nota : notas) {
        cout << valor / nota << " nota(s) de R$ " << nota << ",00" << endl;
        valor %= nota;
    }

    return 0;
}