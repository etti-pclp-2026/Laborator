/*
Problema 6 — Reprezentarea numerelor pe 8 biți
Cerință:
Scrieți reprezentarea pe 8 biți a numerelor 5, 18, 64, 127 și 255.
Precizați care au bitul cel mai semnificativ egal cu 1 și explicați de ce
trebuie fixat numărul de biți.

Rezultate:
5   = 00000101
18  = 00010010
64  = 01000000
127 = 01111111
255 = 11111111
Doar 255 are bitul cel mai semnificativ (bitul 7) egal cu 1.
Explicație: fără o lățime fixă, zerourile din stânga pot fi omise, deci
nu există o poziție stabilă pentru „bitul cel mai semnificativ”.
*/
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int valori[] = {5, 18, 64, 127, 255};
    for (int n : valori) {
        bitset<8> b(n);
        cout << n << " = " << b
             << ", MSB = " << b[7] << '\n';
    }
    cout << "Pe 8 biti, MSB este bitul de pe pozitia 7.\n";
    return 0;
}
