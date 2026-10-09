/*
Problema 2. Declarati variabile pentru: vârsta unei persoane, media unui student, prima literă a numelui si
existenta unei conditii. Alegeti tipul potrivit si initializati variabilele cu valori de exemplu. Afisati-le.
*/

#include <iostream>

using namespace std;

int main()
{
    int varsta = 25; // declararea unei variabile de tip intreg, numita varsta, initializata cu valoarea 25
    float media = 8.5; // declararea unei variabile de tip float, numita media, initializata cu valoarea 8.5
    char prima_litera = 'A'; // declararea unei variabile de tip caracter, numita prima_litera, initializata cu valoarea 'A'
    bool conditie = true; // declararea unei variabile de tip boolean, numita conditie, initializata cu valoarea true

    cout << "Varsta persoanei este: " << varsta << endl;
    cout << "Media studentului este: " << media << endl;
    cout << "Prima litera a numelui este: " << prima_litera << endl;
    cout << "Exista conditia? " << (conditie ? "Da" : "Nu") << endl;

    return 0;
}