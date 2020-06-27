#include <iostream>
using namespace std;

//Prototipo de prom_array
double prom_array(double []);

//Prototipo de all_prom
void all_prom(double [], double);

//Programa principal - Promedio de 25 estaturas
int main() {
    double height[25]; //Arreglo que contrenda las 25 estaturas
    double prom; //Estatura promedio

    cout << "Calcular la altura media en metros de 25 alumnos\n\n";
    prom = prom_array(height); //Asignar nuevo promedio a prom

    cout << "\nLa estatura promedio de los 25 alumnos es: " << prom << endl;
    all_prom(height, prom); //Mostrar cuantos alumnos se encuentran arriba, abajo o tienen la misma altura que la media
}

//Funcion de leer datos y crear promedio
double prom_array(double height[]) {
    double suma = 0; //suma de los elemtos de los 25 array
    double prom = 0; //Promedio de varible suma
    int i = 1; //Numero a mostrar del 1 al 25

    for (int a = 0; a < 25; ++a) { //Ingresar las 25 alturas
        cout << "Estatura del alumno " << i << ": ";
        cin >> height[a];
        if (height[a] > 0) { //coprobar que la altura sea mayor a 0
            ++i;
        } else {
            --a;
            cout << "La altura no puede ser menor a cero, vuelva a ingresar la estatura\n";
        }
    }

    for (int b = 0; b < 25; ++b) { //Sumar las 25 alturas
        suma += height[b];
    }

    prom = (suma/25); //Calcular el promedio de las estaturas
    return prom; //Devolver el promedio
}

//funcion para calcular arriba, abajo o igual que la media
void all_prom(double height[], double prom) {
    int total1 = 0; //Cantidad arriba del promedio
    int total2 = 0; //Cantidad igual que el promedio
    int total3 = 0; //Cantidad por debajo del promedio

    for (int c = 0; c < 25; ++c) {
        if (height[c] > prom) { //Arriba
            ++total1;
        } else if (height[c] == prom) { //En medio
            ++total2;
        } else if (height[c] < prom) { //Por debajo
            ++total3;
        }
    }

    cout << "\nHay un total de " << total1 << " alumnos arriba de la estatura media";
    cout << "\nHay un total de " << total2 << " alumnos con la misma estatura que la media";
    cout << "\nHay un total de " << total3 << " alumnos debajo de la estatura media";
}