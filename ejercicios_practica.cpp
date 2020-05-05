#include <iostream>
using namespace std;
int main() {
   
    cout << "Hola mundo \n";

    int a = 0; // Declaracion de la variable a.

    double d;
    /* La declaracion de la variable d se
    ejecutaria, pero esto no porque es un
    comentario multi-linea. */



    /* Declaracion de dos variables de tipo
    entero y asignandoles un valor. */

    int num1 = 6;
    int num2 = 3;

    /* Declaracion de variables dinde
    almacenaremos los resultados de las
    operaciones*/

    int suma = num1 + num2;
    int resta = num1 - num2;
    int mult = num1 * num2;
    int div = num1/num2;
    int mod = num1%num2;
    
    cout << suma;
    
    
    
    int num3, num4;
    
    /* Utilizamos la palabra reservada "cin"
    seguida de ">>"" y liego el nombre de la
    varieable a ingresar, en caso de pedir
    mas, ingresaremos ">>" de nuevo seguido del
    nombre de la siguiente variable. */

    //cin >> num3 >> num4;

    /*  Utilizaremos la palabta reservada "cout"
    seguida de "<<" y luego el nombre de la
    variable a mostrar. */

    int suma2 = num3 + num4;
    //cout << suma2;

    return 0;
}
