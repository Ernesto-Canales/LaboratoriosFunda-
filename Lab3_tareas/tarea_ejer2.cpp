#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;
    int n3 = 0;

    cout << "Numero 1: \n";
    cin >> n1;
    cout << "Numero 2: \n";
    cin >> n2;

    if (n2 == 0) {
        cout << "El segundo numero no puede ser igual a 0";
    } else {
        int divi = n1%n2;

        if (divi == n3) {
            cout << "El numero " << n1 << " es divisible entre " << n2;
        } else {
            cout << "El numero " << n1 << " no es divisible entre " << n2;
        }
    }

    return 0;
}