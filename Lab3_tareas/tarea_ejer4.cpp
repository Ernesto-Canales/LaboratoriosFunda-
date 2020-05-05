#include <iostream>
using namespace std;

int main() {
    int n1;

    cout << "Ingrese un numero: \n";
    cin >> n1;

    int divi = n1%2;
    if (divi == 0) {
        cout << "El numero " << n1 << " es par";
    } else {
        cout << "El numero " << n1 << " es impar";
    }

    return 0;
}