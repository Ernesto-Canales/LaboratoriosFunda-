#include <iostream>
using namespace std;

//Prototipo de fill_matriz
double fill_matriz(double [][5], int);

//Prototipo de final_grade
void final_grade(double [][5], int);

//Programa principal - Promedio de notas aprobado/reprobado
int main() {
    int n; //Cantidad de elemntos del array

    cout << "Calculo del promedio de 5 notas para n alumnos\n\n";

    cout << "Ingrese la cantidad de alumnos a evaluar: ";
    cin >> n;

    double alumnos[n][5]; //array bidimensional

    fill_matriz(alumnos, n);
    final_grade(alumnos, n);
}

//Funcion de leer y llenar las notas por alumno
double fill_matriz(double alumnos[][5], int n) {
    int i = 1; //Mostrar numero de 1 hasta n en alumnos
    int j = 1; //Mostrar numero de 1 hasta 5 en notas
    double nota = 0; //Guardar notas

    for (int a = 0; a < n; ++a) { //For para llenar cada n alumno
        cout << "\nIngrese la notas del alumno " << i << ": \n";
        for (int b = 0; b < 5; ++b) { //For para llenar las 5 notas de cada n alumno
            cout << "   Ingrese la nota " << j << ": ";
            cin >> nota;
            if ((nota >= 0) && (nota <= 10)) { //Comprobar las notas sean correctas
                alumnos[a][b] = nota;
                ++j;
            } else {
                cout << "La nota no puede ser menor a cero, tampoco puede ser mayor que diez\n";
                --b;
            }
        }
        j = 1; //Resetear j
        ++i;
    }
}

//Funcion de calculo de notas
void final_grade(double alumnos[][5], int n) {
    int i = 1; //Mostrar numero de 1 hasta n en alumnos
    double promedio = 0; //Calcular promedio

    cout << "\nPROMEDIOS";
    for (int c = 0; c < n; ++c) { //For para llamar a los n alumnos
        for (int d = 0; d < 5; ++d) { //For para calcular el promedio de los n alumnos
            promedio += (alumnos[c][d] * 0.20);
        }
        if (promedio >= 7) { //Nota mayor o igual a 7 para aprobar
            cout << "\nEl promedio del alumno " << i << " es: " << promedio << ", este alumno esta aprobado";
        } else {
            cout << "\nEl promedio del alumno " << i << " es: " << promedio << ", este alumno esta reprobado";
        }
        promedio = 0; //Resetar el promedio
        ++i;
    }
}