#include <iostream>
using namespace std;

int main() {
    //Inicio y fin del char

    string word;

    cout << "Ingrese una palabra: \n";
    cin >> word;

    int size = ((word.length())-1);


    if ((tolower(word[0])) == (tolower(word[size]))) {
        cout << "La palabra \'" << word << "\' inicia y finaliza con la letra \'" << word[0] << "\'";
    }
    else {
        cout << "La palabra \'" << word << "\' no inicia ni finaliza con la misma letra";
    }
}