#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int n;
    cin >> n;

    int ano = n / 365;
    int mes;
    int dia;

    if (n >= 365)
    {
        mes = (n - (ano * 365)) / 30;
        dia = n - (ano * 365) - (mes * 30);
    } else {
        mes = n / 30;
        dia = n - (mes * 30);
    }

    cout << ano << " ano(s)" << endl
    << mes << " mes(es)" << endl
    << dia << " dia(s)" << endl;

    return 0;
}