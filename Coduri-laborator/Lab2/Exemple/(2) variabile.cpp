#include <iostream>

using namespace std;

int main()
{
    int a; // declararea unei variabile de tip intreg, numita a
    int b = 5; // declararea unei variabile de tip intreg, numita b, initializata cu valoarea 5
    long long c = 10000000000; // declararea unei variabile de tip long long, numita c, initializata cu valoarea 10000000000

    char d = 'A'; // declararea unei variabile de tip caracter, numita d, initializata cu valoarea 'A' - caracterul A este delimitat de ghilimele simple, deoarece este un singur caracter

    float e = 3.14; // declararea unei variabile de tip float, numita e, initializata cu valoarea 3.14
    double f = 2.718281828459045; // declararea unei variabile de tip double, numita f, initializata cu valoarea 2.718281828459045

    bool g = true; // declararea unei variabile de tip boolean, numita g, initializata cu valoarea true

    cout << "Valoarea variabilei a este: " << a << endl;
    cout << "Valoarea variabilei b este: " << b << endl;
    cout << "Valoarea variabilei c este: " << c << endl;
    cout << "Valoarea variabilei d este: " << d << endl;
    cout << "Valoarea variabilei e este: " << e << endl;
    cout << "Valoarea variabilei f este: " << f << endl;
    cout << "Valoarea variabilei g este: " << g << endl;

    return 0;
}

/*
    Declararea variabilelor in C++ se face prin specificarea tipului de date urmat de numele variabilei, iar optional se poate initializa cu o valoare.
    Tipurile de date comune in C++ includ:
    - int: pentru numere intregi
    - long long: pentru numere intregi foarte mari
    - char: pentru caractere
    - float: pentru numere reale cu precizie simpla
    - double: pentru numere reale cu precizie dubla
    - bool: pentru valori logice (adevarat sau fals)

    Initializarea variabilelor se poate face in momentul declararii sau ulterior, prin atribuirea unei valori.
    Orice atributie de valoare unei variabile trebuie sa fie compatibila cu tipul de date al variabilei respective si va suprascrie valoarea anterioara a variabilei.
    In C++, variabilele trebuie sa fie declarate inainte de a fi utilizate, iar numele variabilelor trebuie sa fie unice in cadrul aceluiasi scope (domeniu de vizibilitate).
    Numele variabilelor trebuie sa respecte regulile de denumire, care includ:
    - sa inceapa cu o litera sau cu caracterul underscore (_)
    - sa contina doar litere, cifre (in interior sau la final) si caractere underscore (_)
    - sa nu contina spatii sau caractere speciale (cu exceptia _)
    - sa nu fie un cuvant rezervat al limbajului C++
*/