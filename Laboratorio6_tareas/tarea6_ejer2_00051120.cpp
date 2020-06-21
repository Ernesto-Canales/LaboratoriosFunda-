#include <iostream>
using namespace std;

//Prototipo de generar arreglo
int gen_array(int [], int);

//Prototipo de mostrar arreglo
int show_array(int [], int);

//Programa principal - 100 numeros impares
int main() {
    int n = 1; //Contador de numeros impares
    int c = 1;
    int num_cien[100];
    cout << "El programa muestra los primeros 100 numeros impares de forma descendente\n\n";

    gen_array(num_cien, n);
    
    show_array(num_cien, c);
}

//Funcion de generar arreglo
int gen_array(int num_cien[], int n) {
    for (int i = 0; i < 100; ++i) {
        num_cien[i] = n;
        n += 2;
    }
}

//Funcion de mostrar arreglo
int show_array(int num_cien[], int c) {
    for (int f = 99; f >= 0; --f) {
        cout << "N " << c << ". " << num_cien[f] << endl;
        c += 1;
    }
}