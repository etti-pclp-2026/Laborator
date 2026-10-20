/*
Problema 7 — Operațiile AND și OR pe 8 biți
Cerință:
Pentru a = (11010110)2 și b = (10101100)2, calculați a & b și a | b.
Dați rezultatele și în baza 10.

Reguli:
AND (&) produce 1 numai dacă ambii biți sunt 1.
OR (|) produce 1 dacă cel puțin unul dintre biți este 1.

Rezultate:
  11010110
& 10101100
= 10000100 = 132
  11010110
| 10101100
= 11111110 = 254
*/
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int a = 0b11010110;
    unsigned int b = 0b10101100;
    unsigned int si = a & b;
    unsigned int sau = a | b;

    cout << "a & b = " << bitset<8>(si) << " = " << si << '\n';
    cout << "a | b = " << bitset<8>(sau) << " = " << sau << '\n';
    return 0;
}
