#include <iostream>
using namespace std;

//Prototipo salario total
double salario_total(double, double);

//Prototipo de salario real
double salario_real(double, double);

//Progama principal - Calculo de Salarios
int main() {
    int n; //numero de empleados
    double h_tra; //horas trabajadas
    double h_ext; //horas extras

    cout << "Calculo de salarios \n \n";
    cout << "Para calcular el salario debe ingresar la cantidad de empleados: ";
    cin >> n;

    if (n >= 0) { //Verificar que la cantidad de empleados sea mayor o igual que 0
        for (int i = 1; i <= n; ++i) { //Repetir hasta que n empleados se cumpla
            cout << "\nEmpleado #" << i << "\nIngrese la cantidad de horas trabajadas: ";
            cin >> h_tra;
            cout << "Ingrese la cantidad de horas extras: ";
            cin >> h_ext;

            if ((h_tra >= 0) && (h_ext >= 0)) { //Verificar que las horas ingresadas sean mayor o igual que 0
                cout << "El salario total es de: $" << salario_total(h_tra, h_ext) << " y el salario real es de: $" << salario_real(h_tra, h_ext) << "\n";
            } else {
                cout << "No puede ingresar numeros negativos \n";        
            }
        }
    } else {
        cout << "No puede ingresar numeros negativos \n";
    }
}

//Funcion Calcular el salario total
double salario_total(double h_tra, double h_ext) {
    const double hora_N = 1.75; //Valor monetario de la hora normal
    const double hora_E = 2.50; //Valor monetario de la hora extra
    
    //Calcular la cantidad de horas*dinero
    double total_N = (hora_N * h_tra);
    double total_E = (hora_E * h_ext);

    double total = (total_N + total_E);

    return total;
}

//Funcion Calcular el salario real
double salario_real(double h_tra, double h_ext) {
    const double seguro = 0.04; //Descuento del seguro social
    const double afp = 0.0625; //Descuento del AFP
    const double isr = 0.1; //Descuento del ISR

    double salario_T = salario_total(h_tra, h_ext); // obtener el salario total sin descuentos

    double descuento;
    double total;

    if (salario_T >= 500) { //Comprobar si el salario es mayor o igual que 500
        descuento = ((salario_T * seguro) + (salario_T * afp) + (salario_T * isr)); //Calcular cada descuento individualmente y luego sumarlos
        total = (salario_T - descuento); //Restar el descuento al salario total

        return total;
    } else {
        descuento = ((salario_T * seguro) + (salario_T * afp)); //Calcular cada descuento individualmente y luego sumarlos
        total = (salario_T - descuento); //Restar el descuento al salario total
        
        return total;
    }
}