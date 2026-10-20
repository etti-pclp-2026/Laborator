/*
Problema 2 — Conversia din baza 2 în baza 10
Cerință:
Transformați în baza 10 numerele (1011)2, (110010)2, (1000001)2,
(11111111)2 și (10110110)2. Scrieți explicit suma puterilor lui 2.

Idee:
Fiecare cifră binară 1 contribuie cu puterea lui 2 corespunzătoare poziției
sale, numerotată de la 0 începând din dreapta.
Exemplu: (1011)2 = 1·2^3 + 0·2^2 + 1·2^1 + 1·2^0 = 11.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string valori[] = {"1011", "110010", "1000001", "11111111", "10110110"};

    for (const string& s : valori) {
        int valoare = 0;
        cout << "(" << s << ")2 = ";
        bool primul = true;

        for (int i = 0; i < (int)s.size(); ++i) {
            int bit = s[i] - '0';
            int putere = (int)s.size() - 1 - i;
            valoare += bit * (1 << putere);

            if (bit == 1) {
                if (!primul)
                    cout << " + ";
                cout << "2^" << putere;
                primul = false;
            }
        }

        cout << " = " << valoare << "\n";
    }
    return 0;
}
