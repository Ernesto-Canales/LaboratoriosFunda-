#include <iostream>
using namespace std;

//Prototipo de calcular leap
bool leap(int);

//Progama principal - Año bisiesto
int main() {
    int year; //año a verificar

    cout << "Indicar si un a\244o es bisiesto o no \n\n";
    cout << "Ingrese el a\244o a verificar: ";
    cin >> year;

    if (leap(year)) { //If true
        cout << "El a\244o " << year << " es bisiesto";
    } else { //Else false
        cout << "El a\244o " << year << " no es bisiesto";
    }
}

//Funcion de calcular leap
bool leap (int year) {
    if ((year % 400) == 0) { //primera forma de verificar
        return true; //Bisiesto
    } else if (((year % 4) == 0) && ((year % 100) != 0)) { //segunda forma de verificar
        return true; //Bisiesto
    } else {        
        return false; //No bisiesto
    }
}