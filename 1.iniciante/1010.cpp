#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int codigo_peca, quantidade_peca;
    double valor_unitario, valor_total;

    valor_total = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> codigo_peca >> quantidade_peca >> valor_unitario;
        valor_total += quantidade_peca * valor_unitario;
    }

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << valor_total << endl;

    return 0;
}