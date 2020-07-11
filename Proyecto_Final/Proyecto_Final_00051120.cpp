#include <iostream>
using namespace std;

const int longCad = 20;

//Estructura para guardar los productos
struct costoPorArticulo {
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//Prototipos
void read_array(costoPorArticulo [], int);
void caculate_array(costoPorArticulo [], int);
void show_array(costoPorArticulo [], int);
void show_total(costoPorArticulo [], int);

//Programa principal - Productos comprados y factura
int main() {
    int numArt = 0; //Cantidad total de articulos a comprar
    
    cout << "Bienvenido a la INFO Store\n\n";
    cout << "Ingrese la cantidad total de productos a comprar: ";
    cin >> numArt;
    cin.ignore(100, '\n');

    if (numArt > 0) { //Validar el numero de articulos, no puede ser negativo
        costoPorArticulo productos[numArt]; //Declarar array de todos los productos
        //Llamar funciones
        read_array(productos, numArt);
        caculate_array(productos, numArt);
        show_array(productos, numArt);
        show_total(productos, numArt);
    } else {
        cout << "\nNo esta permitido ingresar numeros negativos o cero";
    }  
}

//Funcion de leer el arreglo
void read_array(costoPorArticulo productos[], int numArt) {
    int cantidad;
    float precio;
    int n = 0;

    cout << "\nIngrese la informacion de los productos";
    for (int a = 0; a < numArt; ++a) {
        ++n;
        cout << "\nIngrese el nombre del Producto " << n <<": ";
        cin.getline(productos[a].nombreArticul, 20);
        cout << "Ingrese la cantidad que desea comprar de este producto: ";
        cin >> cantidad;
        cout << "Ingrese el precio unitario del producto: $";
        cin >> precio;
 
        if ((cantidad > 0) && (precio > 0)) { //Validar precio y cantidad, no pueden ser negativos
            productos[a].cantidad = cantidad;
            productos[a].precio = precio;
        } else {
            cout << "\nLa cantidad del producto y/o el precio no pueden ser negativos o cero\n";
            --a;
            --n;
        }
        cin.ignore(100, '\n');
    }
}

//Funcion de calcular costo total por articulo
void caculate_array(costoPorArticulo productos[], int numArt) {
    float precioTotalArt = 0;

    for (int b = 0; b < numArt; ++b) {
        precioTotalArt = (productos[b].cantidad * productos[b].precio);
        productos[b].costoPorArticulo = precioTotalArt;
    }
}

//Funcion de desplegar el conteido del arreglo
void show_array(costoPorArticulo productos[], int numArt) {
    int n = 0;

    cout << "\n========== Factura ==========";
    for (int c = 0; c < numArt; ++c) {
        ++n;
        cout << "\nProducto " << n << ": " << productos[c].nombreArticul << endl;
        cout << "Cantidad: " << productos[c].cantidad << endl;
        cout << "Precio unitario: $" << productos[c].precio << endl;
        cout << "Costo total por el producto: $" << productos[c].costoPorArticulo << endl;
    }
}

//Funcion de costo total de la compra
void show_total(costoPorArticulo productos[], int numArt) {
    float precioFinal = 0;
    
    for (int d = 0; d < numArt; ++d) {
        precioFinal += productos[d].costoPorArticulo;
    }
    cout << "\nCosto total de la compra: $" << precioFinal;
}