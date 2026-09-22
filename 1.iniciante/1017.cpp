#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tempo_viagem, velocidade_media;
    cin >> tempo_viagem >> velocidade_media;

    cout << fixed << setprecision(3) << tempo_viagem * velocidade_media / 12.0 << endl;


    return 0;
}