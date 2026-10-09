/*
Problema 6. Cititi două numere reale si determinati maximul folosind exclusiv operatorul ?: pentru alegerea
rezultatului.
*/

#include <iostream>

using namespace std;

int main()
{
    double a, b; // declararea a doua variabile de tip double, numite a si b

    cin >> a >> b; // citirea a doua valori reale de la tastatura, separate prin spatiu sau enter

    double maxim = (a > b) ? a : b; // determinarea maximului dintre a si b folosind operatorul ternar ?:

    cout << "Maximul dintre " << a << " si " << b << " este: " << maxim << endl; // afisarea maximului
    cout << "Maximul dintre " << a << " si " << b << " este: " << ((a > b) ? a : b) << endl; // afisarea maximului folosind direct operatorul ternar ?:

    return 0;
}