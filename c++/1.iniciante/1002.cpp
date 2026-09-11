#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    double pi = 3.14159;
    double raio;

    cin >> raio;
    
    cout << "A=" << fixed << setprecision(4) << pi * raio * raio << endl;

    return 0;
}