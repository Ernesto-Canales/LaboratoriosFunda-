#include <iostream>
using namespace std;

//Color-Precio
int main() {
    int color;

    //Rojo, Azul. Verde, Negro, Amarillo;
    cout << "Eliga una de los siguientes colores e ingrese el numero de ese color: \n";
    cout << "1- Rojo \n";
    cout << "2- Azul \n";
    cout << "3- Verde \n";
    cout << "4- Negro \n";
    cout << "5- Amarillo \n";

    cin >> color;

    if (color == 1) {
        cout << "Eligio el color Rojo, usted gano $100";        
    } else if (color == 2) {
        cout << "Eligio el color Azul, usted gano $30";
    } else if (color == 3) {
        cout << "Eligio el color Verde, usted gano $1";
    } else if (color == 4) {
        cout << "Eligio el color Negro, usted gano $5";
    } else if (color == 5) {
        cout << "Eligio el color Amarillo, usted gano $25";
    } else {
        cout << "No eligio ningun color de la lista.";
    }
}