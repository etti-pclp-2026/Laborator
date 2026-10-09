#include <iostream>

using namespace std;

int main()
{
    int a, b;

    a = 5; // atribuirea valorii 5 variabilei a
    b = 10; // atribuirea valorii 10 variabilei b

    cin >> a >> b; // citirea a doua valori intregi de la tastatura, separate prin spatiu sau enter

    // Citirea va suprascrie valorile initiale ale variabilelor a si b cu valorile citite de la tastatura
    cout << "Valoarea variabilei a este: " << a << endl;
    cout << "Valoarea variabilei b este: " << b << endl;

    return 0;
}

/*
    cin >> param1 >> param2 >> param3 >> ... >> paramN;
    - delimitatorul >> este folosit pentru a citi parametrii specificati de la tastatura, in ordinea in care sunt specificati
    - param1, param2, param3, ..., paramN reprezinta parametrii care se citesc de la tastatura
    - valorile citite de la tastatura vor fi atribuite variabilelor specificate
    - valorile citite de la tastatura trebuie sa fie compatibile cu tipul de date al variabilelor respective, altfel se va produce o eroare
    - citirea va suprascrie valorile initiale ale variabilelor cu valorile citite de la tastatura
*/