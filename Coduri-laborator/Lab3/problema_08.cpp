/*
Problema 8 — XOR și complement pe 8 biți
Cerință:
Pentru a = (00110101)2 și b = (01011100)2, calculați a XOR b.
Apoi determinați complementul pe 8 biți al lui a. Explicați de ce
rezultatul complementului depinde de reprezentare și lățime dacă nu fixăm 8 biți.

Reguli:
XOR (^) produce 1 când biții diferă.
Complementul inversează fiecare bit. Pentru a obține exact 8 biți,
folosim masca 0xFF și păstrăm numai cei 8 biți inferiori.

Rezultate:
a XOR b = 01101001
~a pe 8 biți = 11001010
*/
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int a = 0b00110101;
    unsigned int b = 0b01011100;

    unsigned int x = a ^ b;
    unsigned int complement = (~a) & 0xFF; // Păstrăm numai 8 biți.

    cout << "a XOR b = " << bitset<8>(x) << '\n';
    cout << "Complementul pe 8 biti al lui a = "
         << bitset<8>(complement) << '\n';

    cout << "Fara latime fixa, operatorul ~ inverseaza toti bitii tipului "
            "int, nu doar cei 8 biti ai valorii.\n";
    return 0;
}
