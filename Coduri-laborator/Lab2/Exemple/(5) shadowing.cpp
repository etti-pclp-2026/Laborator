#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 20;

    {
        int b = 10;
        cout << "Suma dintre a si b este: " << a + b << endl;
    }

    cout << "Suma dintre a si b este: " << a + b << endl; // Care ar fi rezultatul daca linia 8 ar fi fost eliminata? Care ar fi rezultatul daca linia 8 ar fi fost modificata astfel: int b = 15;?

    return 0;
}

/*
    In C++, variabilele pot fi declarate in interiorul unui bloc de cod (dintre acoladele { si }), iar acestea vor avea un scope (domeniu de vizibilitate) limitat la acel bloc de cod.
    Variabilele declarate in interiorul unui bloc de cod pot "umbri" (shadow) variabilele cu acelasi nume declarate in afara blocului de cod, ceea ce inseamna ca variabila din interiorul blocului va fi utilizata in locul celei din afara blocului, atata timp cat ne aflam in interiorul blocului.
    Dupa iesirea din blocul de cod, variabila din interiorul blocului nu mai este vizibila, iar variabila din afara blocului poate fi utilizata din nou.
*/