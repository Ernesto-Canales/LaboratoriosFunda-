#include <iostream>
using namespace std;

//Prototipo de leer los arreglos
int read_array(int [], int);

//Prototipo de sumar los arreglos
int add_array(int [], int [], int [], int);

//Prototipo de mostrar respusta
int show_array(int [], int);

//Programa principal - Generar tercer arreglo
int main() {
    int n; //cantidad de elementos

    cout << "Generar un tercer arreglo a base de 2 ingresados\n\n";
    cout << "Ingrese la canidad de elementos que contendra el arreglo: ";
    cin >> n;

    int arreglo1[n];
    int arreglo2[n];

    int suma[n];

    cout << "\nIngrese " << n << " elementos para el arreglo 1:\n";
    read_array(arreglo1, n);

    cout << "\nIngrese " << n << " elementos para el arreglo 2:\n";
    read_array(arreglo2, n);

    cout << "\nLa suma de los elemtos de los dos arreglos es:\n";
    add_array(arreglo1, arreglo2, suma, n);
    show_array(suma, n);
}

//Funcion de leer arreglo
int read_array(int arreglo[], int n) {
  for (int a = 0; a < n; a++) {
    cout << "Elemento " << a << ": ";
    cin >> arreglo[a];
  }
}

//Funcion de sumar arreglo
int add_array(int arreglo1[], int arreglo2[], int suma[], int n) {
  for (int b = 0; b < n; b++) {
    suma[b] = (arreglo1[b] + arreglo2[b]);
  }
}

//Funcion de resultado de sumar arreglo
int show_array(int suma[], int n) {
  for (int c = 0; c < n; c++) {
    cout << "Elemento " << c << ": " << suma[c] << endl;
  }
}