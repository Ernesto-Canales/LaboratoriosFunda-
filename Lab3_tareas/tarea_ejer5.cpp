#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rad;
    cout << "Ingrese radio de un circulo: \n";
    cin >> rad;

    // Perimetro
    int per = (2*M_PI*rad);

    // Area
    int area = (M_PI*(pow(rad,2)));

    cout << "El perimetro es igual a: " << per << " cm^2 \n";
    cout << "El area es igual a: " << area << " cm^2 20\n";

    return 0;
}