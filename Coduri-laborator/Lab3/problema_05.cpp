/*
Problema 5 — Conversii între binar și octal
Cerință:
Convertiți în octal (101101)2, (11101001)2 și (110101110)2.
Efectuați și conversia inversă pentru (725)8. Grupați biții câte trei,
de la dreapta la stânga.

Idee:
O cifră octală corespunde exact la 3 biți. Grupăm de la dreapta;
dacă este nevoie, completăm grupul din stânga cu zerouri.
Rezultate:
101 101 -> 55; 011 101 001 -> 351; 110 101 110 -> 656.
(725)8 = 111 010 101 = (111010101)2.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "(101101)2 = (101 101)2 = (55)8\n";
    cout << "(11101001)2 = (011 101 001)2 = (351)8\n";
    cout << "(110101110)2 = (110 101 110)2 = (656)8\n";
    cout << "(725)8 = (111 010 101)2 = (111010101)2\n";
    return 0;
}
