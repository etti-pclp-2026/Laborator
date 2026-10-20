/*
Problema 10 — Verificarea biților cu măști
Cerință:
Pentru numărul (10110110)₂, determinați masca 1 << k pentru k = 0, 2, 4, 7.
Folosiți AND pentru a verifica dacă bitul de pe fiecare poziție este setat.
Pozițiile se numerotează de la 0, începând cu bitul cel mai din dreapta.

Idee:
Masca 1 << k are un singur bit setat, pe poziția k. Dacă (n & masca) != 0,
bitul respectiv din n este 1.

Pentru n = 10110110:
pozițiile 0, 2 și 7 sunt 0, 1 și 1; poziția 4 este 1.
*/
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int n = 0b10110110;
    int pozitii[] = {0, 2, 4, 7};

    cout << "n = " << bitset<8>(n) << '\n';
    for (int k : pozitii) {
        unsigned int masca = 1u << k;
        bool setat = (n & masca) != 0;

        cout << "k = " << k
             << ", masca = " << bitset<8>(masca)
             << ", n & masca = " << bitset<8>(n & masca)
             << " -> bitul este " << (setat ? "setat (1)" : "nesetat (0)")
             << '\n';
    }
    return 0;
}
