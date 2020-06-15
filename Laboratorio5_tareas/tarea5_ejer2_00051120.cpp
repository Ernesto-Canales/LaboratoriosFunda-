#include <iostream>
#include <iomanip>
using namespace std;

//Prototipo de seconds
int seconds(int);

//Prototipo de minutes
int minutes(int, int);

//Prototipo de hours
int hours(int, int, int);

//Programa principal - Dar la hora un segundo despues
int main() {
    int hh;
    int mm;
    int ss;

    cout << "Ingrese la hora en hh-mm-ss, formato 24 horas \n";
    cout << "Hora: ";
    cin >> hh;
    cout << "Minutos: ";
    cin >> mm;
    cout << "Segundos: ";
    cin >> ss;

    if ((hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59)) {
        cout << "\nLa hora " << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ":" << setfill('0') << setw(2) << ss;
        cout << ", un segundo despues es: " << setfill('0') << setw(2) << hours(hh, mm, ss) << ":" << setfill('0') << setw(2) << minutes(mm, ss) << ":" << setfill('0') << setw(2) << seconds(ss);
    } else {
        cout << "La hora ingresa en hh-mm-ss fue ingresada incorrectamente";
    }
}

//Funcion de segundos
int seconds(int ss) {
    ++ss;
    if (ss == 60) {
        ss = 0;
        return ss;
    } else {
        return ss;
    }
}

//Funcion de minutos
int minutes(int mm, int ss) {
    if (seconds(ss) == 0) {
        ++mm;
        if (mm == 60) {
            mm = 0;
            return mm;
        } else {
            return mm;
        }
    } else {
        return mm;
    }  
}

//Funcion de horas
int hours(int hh, int mm, int ss) {
    if (minutes(mm, ss) == 0 && seconds(ss) == 0) {
        ++hh;
        if (hh == 24) {
            hh = 0;
            return hh;
        } else {
            return hh;
        }
    } else {
        return hh;
    }
}
