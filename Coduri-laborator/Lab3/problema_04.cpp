/*
Problema 4 — Conversii între binar și hexazecimal
Cerință:
Convertiți în hexazecimal numerele (10101111)2, (11001010)2,
(111101011001)2. Apoi transformați (3A7)16 și (C4)16 în baza 2.
Grupați biții câte patru, de la dreapta la stânga.

Idee:
Grupăm biții în blocuri de câte 4. Dacă grupul din stânga este incomplet,
adăugăm zerouri în stânga. Fiecare grup de 4 biți reprezintă o cifră hexazecimală.
Rezultate:
1010 1111 -> AF; 1100 1010 -> CA; 1111 0101 1001 -> F59
3A7 -> 0011 1010 0111; C4 -> 1100 0100.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "(10101111)2 = (1010 1111)2 = (AF)16\n";
    cout << "(11001010)2 = (1100 1010)2 = (CA)16\n";
    cout << "(111101011001)2 = (1111 0101 1001)2 = (F59)16\n";
    cout << "(3A7)16 = (0011 1010 0111)2\n";
    cout << "(C4)16 = (1100 0100)2\n";
    return 0;
}
