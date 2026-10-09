/*
Problema 3. Cititi două numere întregi a si b. Afisati câtul si restul împărtirii lor.
Ce se întâmplă în cazul în care b = 0?
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b; // declararea a doua variabile de tip intreg, numite a si b

    cin >> a >> b; // citirea a doua valori intregi de la tastatura, separate prin spatiu sau enter

    cout << "Catul impartirii lui a la b este: " << a / b << endl; // afisarea catului impartirii lui a la b
    cout << "Restul impartirii lui a la b este: " << a % b << endl; // afisarea restului impartirii lui a la b

    return 0;
}

// Acest program este partial functional, deoarece nu trateaza cazul in care b = 0, ceea ce va duce la o eroare de impartire la zero.
// In C++, impartirea unui numar intreg la zero nu este permisa si va cauza o exceptie sau un comportament nedefinit.
// Pentru a evita aceasta problema, ar trebui sa adaugam o verificare pentru a ne asigura ca b nu este zero inainte de a efectua operatia de impartire.