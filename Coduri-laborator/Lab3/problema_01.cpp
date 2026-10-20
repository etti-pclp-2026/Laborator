/*
Problema 1 — Conversia din baza 10 în baza 2
Cerință:
Transformați în baza 2 numerele zecimale 13, 25, 42, 73, 100 și 255.
Pentru fiecare număr, arătați împărțirile succesive la 2 și resturile obținute.

Idee:
Împărțim numărul repetat la 2 și notăm fiecare rest. Când câtul devine 0,
citim resturile în ordine inversă (de jos în sus).
Exemplu pentru 13:
13 : 2 = 6, rest 1
 6 : 2 = 3, rest 0
 3 : 2 = 1, rest 1
 1 : 2 = 0, rest 1
Prin urmare, (13)10 = (1101)2.
*/
#include <iostream>
using namespace std;

void convert(int n) {
    cout << n << " in baza 2:\n";
    int resturi[32], nr = 0, x = n;

    do {
        cout << x << " : 2 = " << x / 2 << ", rest " << x % 2 << '\n';
        resturi[nr++] = x % 2;
        x /= 2;
    } while (x > 0);

    cout << "Rezultat: (" << n << ")10 = (";
    for (int i = nr - 1; i >= 0; --i)
        cout << resturi[i];
    cout << ")2\n\n";
}

int main() {
    int valori[] = {13, 25, 42, 73, 100, 255};
    for (int n : valori) convert(n);
    return 0;
}
