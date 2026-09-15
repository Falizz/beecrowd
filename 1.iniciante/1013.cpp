#include <bits/stdc++.h>

using namespace std;

int maior (int a, int b){
    return (a + b + abs(a - b)) / 2;
}

int main (void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if (maior(a, b) == a){
        cout << maior(a, c);
    } else {
        cout << maior(b, c);
    }

    cout << " eh o maior" << endl;

    return 0;
}