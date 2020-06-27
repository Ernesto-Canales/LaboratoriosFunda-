#include <iostream>
using namespace std;

//Prototipo de show_array
char show_array(char [], int);

//Programa principal - Codigicar un arreglo
int main() {
    int n = 256; //Cantidad de elemntos del array (Largo de la frase)
    char palabra[n]; //Array donde se guardara cada caracter de la palabra/frase

    cout << "Codificar un arreglo usando la clave murcielago\n\n";

    cout << "Ingrese su palabra/frase: ";
    cin.getline(palabra, n); //Leer toda la linea

    cout << "Su palabra/frase codificada es: ";
    show_array(palabra, n); //Mostrar el arreglo codificado
}

//Funcion de mostrar arreglo
char show_array(char palabra[], int n) {
    for (int a = 0; palabra[a] != '\0'; ++a) { //For para mostrar cada elemento del arreglo
        switch (tolower(palabra[a])) { //Switch para cambiar cada letra por un numero, solo si la letra concuerda con la clave murcielago
            case 'm':
                palabra[a] = '0';
                break;
            case 'u':
                palabra[a] = '1';
                break;
            case 'r':
                palabra[a] = '2';
                break;
            case 'c':
                palabra[a] = '3';
                break;
            case 'i':
                palabra[a] = '4';
                break;
            case 'e':
                palabra[a] = '5';
                break;
            case 'l':
                palabra[a] = '6';
                break;
            case 'a':
                palabra[a] = '7';
                break;
            case 'g':
                palabra[a] = '8';
                break;
            case 'o':
                palabra[a] = '9';
                break;
        }
        cout << palabra[a]; //Mostrar cada cada char del arreglo
    }
}