#include <iostream>
using namespace std;

//Prototipo de respuesta
void respuesta(int, int);

//Prototipo de intentos
void intentos(int);

//Progama principal - El numero magico
int main() {
    const int n = 27; //Numero a adivinar [1,100]
    int num; //Numero entero ingresado por el usuario
    char option; // opcion para terminar el programa

    cout << "Adivine el numero magico\n";

    do { //Repetir hasta que el usuario deje de ingresar S o s
        for (int i = 1; i <= 5; ++i) { //Repetir hasta que el usurio use los 5 intentos
            cout << "\nIngrese un mumero entero que se encuentre entre 1 y 100: ";
            cin >> num;

            if (num <= 0) {
                cout << "El numero ingresado no puede ser negativo\n";
                --i;
            } else {
                if (n == num) { //Condicion en caso de adivinar el numero
                    respuesta(n, num);
                    break; //Romper bucle for
                } else { //En caso de no adivinar el numero
                    respuesta(n, num);
                }
                intentos(i);
            }
        }
        cout << "\nDesea seguir jugando (S o N): ";
        cin >> option;

    } while ((option == 's') || (option == 'S')); //Evaluar si termnar el programa
}

//Funcion de respuesta
void respuesta(int n, int num) {
    if (n == num) {
        cout << "Felicidades, adivinaste el numero magico\n";
    } else if (num > n) {
        cout << "El numero ingresado es mayor que el numero magico\n";
    } else if (num < n) {
        cout << "El numero ingresado es menor que el numero magico\n";
    } else {
        cout << "Error";
    }
}

//Funcion de contar intentos
void intentos(int i) {
    if (i == 5) {
        cout << "Se acabaron los intentos\n\n";
    } else {
        cout << "Quedan " << (5 - i) << " intentos\n";
    }
}