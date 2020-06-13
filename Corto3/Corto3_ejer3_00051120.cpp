#include <iostream>
using namespace std;

//Prototipo de calcular leap
void leap(int);

//Progama principal - Año bisiesto
int main() {
    int year; //año a verificar

    cout << "Indicar si un a\244o es bisiesto o no \n\n";
    cout << "Ingrese el a\244o a verificar: ";
    cin >> year;

    leap(year);
}

//Funcion de calcular leap
void leap (int year) {
    if ((year % 400) == 0) { //primera forma de verificar
        cout << "El a\244o " << year << " es bisiesto";
    } else if (((year % 4) == 0) && ((year % 100) != 0)) { //segunda forma de verificar
        cout << "El a\244o " << year << " es bisiesto";
    } else {
        cout << "El a\244o " << year << " no es bisiesto";
    }
}