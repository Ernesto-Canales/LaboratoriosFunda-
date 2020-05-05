#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese a \n";
    cin >> a;
    cout << "Ingrese b \n";
    cin >> b;
    cout << "Ingrese c \n";
    cin >> c;

    //Calcular discriminante
    int dis = ((pow(b,2))-(4*a*c));
    
    if (dis < 0) {
        cout << "No es posible resolver esta ecuacion (Raiz negativa)";
    } else {
        // Ecuacion 1
        int eq1 = ((-1*b+(sqrt((pow(b,2))-(4*a*c))))/(2*a));
        // Ecuacion 2
        int eq2 = ((-1*b-(sqrt((pow(b,2))-(4*a*c))))/(2*a));

        cout << "X1 vale: " << eq1 << "\n";
        cout << "X2 vale: " << eq2 << "\n";
    }
}