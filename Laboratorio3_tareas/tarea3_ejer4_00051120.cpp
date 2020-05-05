#include <iostream>

using namespace std;

int main() {
    // Producto

    string name;
    double price;
    int amount;

    cout << "Nombre del producto: \n";
    cin >> name;
    cout << "Precio del producto: \n";
    cin >> price;
    cout << "Cantidad del producto: \n";
    cin >> amount;

    if (price < 0) {
        cout << "El precio del producto no puede menor que 0";
    } else if (amount < 0) {
        cout << "La cantidad del producto no puede menor que 0";
    } else {
        double total = (price*amount);

        cout << "En la compra de " << amount << " " << name << " a $" << price << ", se gasto un total de $" << total << " Dolares.";
    }

    return 0;

}