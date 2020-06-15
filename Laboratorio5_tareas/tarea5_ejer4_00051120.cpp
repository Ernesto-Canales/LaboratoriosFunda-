#include <iostream>
#include <iomanip>
using namespace std;

//Prototipo de leap
bool leap(int);

//Prototipo de day
int day(int, int, int);

//Prototipo de month
int month(int, int, int);

//Prototipo de year
int year(int, int, int);

//Programa principal - Dar la fecha un dia despues
int main() {
    int dd;
    int mm;
    int aa;

    cout << "Ingrese el fecha en formato dd/mm/aaaa\n";
    cout << "Dia: ";
    cin >> dd;
    cout << "Mes: ";
    cin >> mm;
    cout << "a\244o: ";
    cin >> aa;

    if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12)) {
        if (dd >= 1 && dd <= 31) {
            cout << "\nLa fecha " << setfill('0') << setw(2) << dd << "/" << setfill('0') << setw(2) << mm << "/" << aa;
            cout << ", un dia despues es: " << setfill('0') << setw(2) << day(dd, mm, aa) << "/" << setfill('0') << setw(2) << month(dd, mm, aa) << "/" << year(dd, mm, aa);
        } else {
            cout << "No existe menos de un dia en los meses y no existe mas de 31 dias en este mes";    
        }
    } else if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11)) {
        if (dd >= 1 && dd <= 30) {
            cout << "\nLa fecha " << setfill('0') << setw(2) << dd << "/" << setfill('0') << setw(2) << mm << "/" << aa;
            cout << ", un dia despues es: " << setfill('0') << setw(2) << day(dd, mm, aa) << "/" << setfill('0') << setw(2) << month(dd, mm, aa) << "/" << year(dd, mm, aa);
        } else {
            cout << "No existe menos de un dia en los meses y no existe mas de 30 dias en este mes";    
        }
    } else if (mm == 2) {
        if (leap(aa)) {
            if (dd >= 1 && dd <= 29) {
                cout << "\nLa fecha " << setfill('0') << setw(2) << dd << "/" << setfill('0') << setw(2) << mm << "/" << aa;
                cout << ", un dia despues es: " << setfill('0') << setw(2) << day(dd, mm, aa) << "/" << setfill('0') << setw(2) << month(dd, mm, aa) << "/" << year(dd, mm, aa);
            } else {
                cout << "No existe menos de un dia en los meses y no existe mas de 29 dias en este mes";    
            }
        } else {
            if (dd >= 1 && dd <= 28) {
                cout << "\nLa fecha " << setfill('0') << setw(2) << dd << "/" << setfill('0') << setw(2) << mm << "/" << aa;
                cout << ", un dia despues es: " << setfill('0') << setw(2) << day(dd, mm, aa) << "/" << setfill('0') << setw(2) << month(dd, mm, aa) << "/" << year(dd, mm, aa);
            } else {
                cout << "No existe menos de un dia en los meses y no existe mas de 28 dias en este mes";    
            }
        } 
    } else {
        cout << "No existen mas de 12 meses en el a\244o";
    }
}

//Funcion de calcular leap
bool leap (int aa) {
    if ((aa % 400) == 0) { //primera forma de verificar
        return true; //Bisiesto
    } else if (((aa % 4) == 0) && ((aa % 100) != 0)) { //segunda forma de verificar
        return true; //Bisiesto
    } else {        
        return false; //No bisiesto
    }
}

//Funcio de calcular dias
int day(int dd, int mm, int aa) {
    ++dd;

    if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12)) {
        if (dd == 32) {
            dd = 1;
            return dd;
        } else {
            return dd;
        }
    } else if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11)) {
        if (dd == 31) {
            dd = 1;
            return dd;
        } else {
            return dd;
        }
    } else if (mm == 2) {
        if (leap(aa)) {
            if (dd == 30) {
                dd = 1;
                return dd;
            } else {
                return dd;
            }
        } else {
            if (dd == 29) {
                dd = 1;
                return dd;
            } else {
                return dd;
            }
        }
    } 
}

//Funcion de calcular mes
int month(int dd, int mm, int aa) {
    /*
    //31 dias
        jan = 31; //1
        mar = 31; //3
        may = 31; //5
        jul = 31; //7
        aug = 31; //8
        oct = 31; //10
        dec = 31; //12
    //30 dias
        apr = 30; //4
        jun = 30; //6
        sep = 30; //9
        nov = 30; //11
    //28 o 29 dias
        feb; //2
    */
    if (day(dd, mm, aa) == 1) {
        ++mm;
        if (mm == 13) {
            mm = 1;
            return mm;
        } else {
            return mm;
        }
    } else {
        return mm;
    }
}

//Funcion de calcular año
int year(int dd, int mm, int aa) {
    if ((day(dd, mm, aa) == 1) && (month(dd, mm, aa) == 1)) {
        ++aa;
        return aa;
    } else {
        return aa;
    }
}