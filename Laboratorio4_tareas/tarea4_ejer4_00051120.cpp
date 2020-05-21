#include <iostream>
using namespace std;

int main() {
    //Cadena mayor o menor a 10 caracteres

    string word;
    string par_impar;

    cout << "Ingrese una palabra: \n";
    cin >> word;

    int size = word.length();

    string resul = ((size%2)==0) ? par_impar = "par" : par_impar = "impar";

    if (size == 10) {
        cout << "La palabra \'" << word << "\' tiene 10 caracteres y es " << par_impar;
    }
    else if (size > 10) {
        cout << "La palabra \'" << word << "\' tiene mas de 10 caracteres y es " << par_impar;
    }
    else if (size < 10) {
        cout << "La palabra \'" << word << "\' tiene menos de 10 caracteres y es " << par_impar;
    }
    else {
        cout << "ERROR!";
    }

}