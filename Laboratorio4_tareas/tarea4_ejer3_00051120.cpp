#include <iostream>
using namespace std;

int main() {
    //Positive, negative or cero

    double n;

    cout << "Ingrese un numero: \n";
    cin >> n;

    if (n == 0) {
        cout << "El numero ingresado es Cero";
    } 
    else if (n > 0) {
        cout << "El numero ingresado es positivo";
    } 
    else if (n < 0) {
        cout << "El numero ingresado es negativo";
    }
    else {
        cout << "ERROR!";
    }
}
