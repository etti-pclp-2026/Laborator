#include <iostream>

using namespace std;

int main()
{
    cout << "Ana are mere!";
    cout << "Bogdan are pere!"; // textul se afiseaza pe aceeasi linie, imediat dupa textul anterior

    cout<<endl; // afisarea unui caracter de sfarsit de linie, urmatorul text se va afisa pe o linie noua

    cout << "Ana are mere si pere!" << endl; // afisarea textului pe o linie noua, urmat de un caracter de sfarsit de linie

    cout << "Bogdan are mere si pere!\n"; // afisarea textului pe o linie noua, urmat de un caracter de sfarsit de linie

    return 0;
}

/*
    cout << param1 << param2 << param3 << ... << paramN;
    - delimitatorul << este folosit pentru a afisa parametrii specificati pe ecran, in ordinea in care sunt specificati
    - param1, param2, param3, ..., paramN reprezinta parametrii care se afiseaza pe ecran, in ordinea in care sunt specificati
    - endl reprezinta un caracter de sfarsit de linie, care determina ca urmatorul text sa se afiseze pe o linie noua
    - \n reprezinta alternativa pentru endl, care determina ca urmatorul text sa se afiseze pe o linie noua
*/