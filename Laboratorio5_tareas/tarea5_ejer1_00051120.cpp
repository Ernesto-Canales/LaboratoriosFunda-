#include <iostream>
using namespace std;

//Prototipo de euclidesMCD
int euclidesMCD(int, int);

//Progama principal - Devolver el MCD
int main() {
    int mayor;
    int menor;

    cout<<"MCD de dos numeros\n";

    cout<<"Digite el numero mayor: \n";
    cin>>mayor; 
    cout<<"Digite el numero menor: \n";
    cin>>menor;

    if (menor != 0) {
        if (mayor >= menor) {
            cout << "El MCD de " << mayor << " y " << menor << " es: " << euclidesMCD(mayor, menor);
        } else {
            cout << "Ingreso los numeros al reves";
        }
    } else {
        cout << "El numero menor tiene que ser diferente de 0";
    }
}

//Funcion del Método de Euclides
int euclidesMCD(int mayor, int menor) {
    int residuo;

    do { 
        residuo = (mayor%menor); 
        if(residuo != 0){ 
            mayor = menor; 
            menor = residuo; 
        }
    }
    while(residuo != 0);

    return menor;
}