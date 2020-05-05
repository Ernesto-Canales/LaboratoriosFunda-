#include <iostream>
using namespace std;

int main() {
    // Promedio de tres numeros
    
    int n1;
    int n2;
    int n3;

    cout << "Primer numero \n";
    cin >> n1;
    cout << "Segundo numero \n";
    cin >> n2;
    cout << "Tercer numero \n";
    cin >> n3;
    
    int prom = ((n1 + n2 + n3)/3);

    cout << "El promedio es: " << prom;

    return 0;

}