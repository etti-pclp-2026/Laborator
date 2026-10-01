// Biblioteca iostream este o bibliotecă standard din C++ care oferă funcții și obiecte
// pentru operații de intrare și ieșire, cum ar fi citirea de la tastatură cu cin și
// afișarea pe ecran cu cout. Prin #include îi spunem compilatorului să includă
// conținutul acestei biblioteci în program. În loc de iostream putem include și alte
// biblioteci, de exemplu <cmath> pentru funcții matematice, <string> pentru lucrul
// cu șiruri de caractere sau <iomanip> pentru formatarea numerelor afișate.
#include <iostream>

// Directiva using namespace std permite folosirea elementelor din spațiul de nume
// std fără să scriem de fiecare dată prefixul std::. De exemplu, putem scrie cout
// în loc de std::cout și cin în loc de std::cin. Un namespace grupează identificatori
// pentru a evita conflictele între elemente cu același nume. Alternativ, putem să nu
// folosim această linie și să scriem explicit std::cout, std::cin, std::string etc.
using namespace std;

// Funcția main este punctul de pornire al oricărui program C++. Atunci când programul
// este executat, instrucțiunile din această funcție sunt executate în ordine, de sus
// în jos. Tipul int indică faptul că funcția va returna un număr întreg către sistemul
// de operare. În interiorul funcției main putem declara variabile, citi date, efectua
// calcule, folosi structuri if/else, bucle for/while și apela alte funcții.
int main()
{
	// cout este un obiect din biblioteca iostream folosit pentru afișarea informațiilor
	// pe ecran. Operatorul << transmite textul către cout, iar "\n" reprezintă un
	// caracter de linie nouă, astfel încât următorul text afișat va apărea pe linia
	// următoare. Putem folosi cout pentru a afișa și variabile sau expresii, de exemplu
	// cout << x; sau cout << "Suma este " << a + b << "\n";. Pentru o linie nouă putem
	// folosi și endl, ca în cout << "Salut" << endl;, deși \n este de obicei suficient.
	cout << "Wecolme to Poli\n";

	// Instrucțiunea return încheie execuția funcției și transmite valoarea 0 către
	// sistemul de operare. În cazul funcției main, return 0 indică faptul că programul
	// s-a terminat cu succes, fără erori. Am putea returna și o altă valoare pentru a
	// indica apariția unei probleme. În C++, dacă ajungem la finalul funcției main fără
	// un return explicit, se consideră automat că am returnat 0.
	return 0;
}
