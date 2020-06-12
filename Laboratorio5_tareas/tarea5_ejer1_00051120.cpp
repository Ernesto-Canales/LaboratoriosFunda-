#include <iostream>
using namespace std;

int euclidesMCD(int, int);

int main() {
    //Devolver el MCD
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

//Método de Euclides
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