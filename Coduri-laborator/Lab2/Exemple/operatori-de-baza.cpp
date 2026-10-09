#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10;

    cout << "Valoarea variabilei a este: " << a << endl;
    cout << "Valoarea variabilei b este: " << b << endl;

    // Operatii aritmetice de baza in C++:
    cout << "Rezultatul operatiei a + b este: " << a + b << endl; // adunarea a doua variabile de tip intreg
    cout << "Rezultatul operatiei a - b este: " << a - b << endl; // scaderea a doua variabile de tip intreg
    cout << "Rezultatul operatiei a * b este: " << a * b << endl; // inmultirea a doua variabile de tip intreg
    cout << "Rezultatul operatiei a / b este: " << a / b << endl; // impartirea cu cat a doua variabile de tip intreg, rezultatul va fi un numar intreg, fara zecimale
    cout << "Rezultatul operatiei a % b este: " << a % b << endl; // restul impartirii a doua variabile de tip intreg

    // Operatii de incrementare si decrementare in C++:
    int s = a++; // incrementarea variabilei a cu 1, valoarea initiala a este atribuita variabilei s, iar apoi a este incrementata cu 1
    int t = ++b; // incrementarea variabilei b cu 1, valoarea finala a lui b este atribuita variabilei t

    cout << "Valoarea variabilei s este: " << s << endl;
    cout << "Valoarea variabilei a dupa incrementare este: " << a << endl;

    cout << "Valoarea variabilei t este: " << t << endl;
    cout << "Valoarea variabilei b dupa incrementare este: " << b << endl;

    return 0;
}