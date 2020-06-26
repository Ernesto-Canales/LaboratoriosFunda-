#include <iostream>
using namespace std;

//Pais-Precio-IVA
int main() {
    int pais;
    double money, iva;

    //Paises;
    cout << "Eliga una de los siguientes paises e ingrese el numero de ese pais: \n";
    cout << "1- El Salvador \n";
    cout << "2- Guatemala \n";
    cout << "3- Honduras \n";
    cout << "4- Espana \n";

    cin >> pais;

    cout << "Ingrese la candidad de dinero que porta: \n";

    cin >> money;

    if (pais==1) {
        iva = (money*0.13);
    } else if (pais==2) {
        iva = (money*0.9);
    } else if (pais==3) {
        iva = (money*0.15);
    } else if (pais==4) {
        iva = (money*0.20);
    } else {
        cout << "ERROR!";
    }

    if (pais == 1) {
        cout << "En El Salvador por sus $" << money << " dolares, usted debe cancelar $" << iva << " dolares en IVA.";
    } else if (pais == 2) {
        cout << "En Guatemala por sus $" << money << " dolares, usted debe cancelar $" << iva << " dolares en IVA.";
    } else if (pais == 3) {
        cout << "En Honduras por sus $" << money << " dolares, usted debe cancelar $" << iva << " dolares en IVA.";
    } else if (pais == 4) {
        cout << "En Espana por sus $" << money << " dolares, usted debe cancelar $" << iva << " dolares en IVA.";
    } else {
        cout << "No eligio ningun pais de la lista.";
    }
}