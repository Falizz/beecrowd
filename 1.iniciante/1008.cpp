#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int NumeroFuncionario, HorasTrabalhadas;
    double ValorHora;

    cin >> NumeroFuncionario >> HorasTrabalhadas >> ValorHora;

    cout << "NUMBER = " << NumeroFuncionario << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << ValorHora * HorasTrabalhadas << endl;

    return 0;
}