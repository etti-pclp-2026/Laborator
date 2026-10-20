/*
Problema 3 — Conversii între bazele 2, 8, 10 și 16
Cerință:
Convertiți fiecare număr în celelalte două baze indicate:
(45)10 în bazele 2 și 16; (1101011)2 în bazele 10 și 16;
(2D)16 în bazele 2 și 10; (157)8 în bazele 2 și 10.

Rezultate:
(45)10 = (101101)2 = (2D)16
(1101011)2 = (107)10 = (6B)16
(2D)16 = (00101101)2 = (45)10
(157)8 = (1101111)2 = (111)10

Idee:
Pentru hexazecimal, fiecare cifră corespunde unui grup de 4 biți.
Pentru octal, fiecare cifră corespunde unui grup de 3 biți.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "(45)10 = (101101)2 = (2D)16\n";
    cout << "(1101011)2 = (107)10 = (6B)16\n";
    cout << "(2D)16 = (00101101)2 = (45)10\n";
    cout << "(157)8 = (1101111)2 = (111)10\n";
    return 0;
}
