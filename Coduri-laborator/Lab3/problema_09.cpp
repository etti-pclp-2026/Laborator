/*
Problema 9 — Deplasări pe 8 biți
Cerință:
Folosind reprezentări pe 8 biți, calculați 00101101₂ << 2 și
10110100₂ >> 3. Indicați biții eliminați și introduși. Pentru deplasarea
la stânga, precizați dacă rezultatul încape în 8 biți.

Rezultate:
00101101 << 2 -> 10110100. Se elimină cei doi biți din stânga „00”;
se introduc doi biți 0 în dreapta. Valoarea matematică este 180 și încape
în 8 biți.
10110100 >> 3 -> 00010110. Se elimină din dreapta biții „100” și se
introduc trei biți 0 în stânga (deplasare logică).

*/
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int a = 0b00101101;
    unsigned int b = 0b10110100;

    unsigned int stanga = (a << 2) & 0xFF;
    unsigned int dreapta = b >> 3;

    cout << bitset<8>(a) << " << 2 = " << bitset<8>(stanga) << '\n';
    cout << "Se elimina din stanga bitii 00; se introduc 00 in dreapta.\n";
    cout << "Valoarea rezultata este " << stanga << ", incape pe 8 biti.\n";

    cout << bitset<8>(b) << " >> 3 = " << bitset<8>(dreapta) << '\n';
    cout << "Se elimina din dreapta secventa 100; se introduc 000 in stanga.\n";
    return 0;
}
