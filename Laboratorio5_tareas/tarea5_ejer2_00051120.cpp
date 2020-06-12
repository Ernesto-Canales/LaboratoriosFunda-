#include <iostream>
using namespace std;

int seconds(int);
int minutes(int);
int hours(int);

int main() {
    //Dar la hora un segundo despues
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
        cout << "La hora " << hh << ":" << mm << ":" << ss << ", un segundo despues es: " << hours(hh) << ":" << minutes(mm) << ":" << seconds(ss);
    } else {
        cout << "La hora ingresa en hh-mm-ss fue ingresada incorrectamente";
    }
}

int seconds(int ss) {
    ++ss;
    if (ss == 60) {
        ss == 0;
        return ss;
    } else {
        return 1;
    }
}

int minutes(int mm) {
    ++mm;
    if (mm == 60) {
        mm == 0;
        return mm;
    } else {
        return 2;
    }
}

int hours(int hh) {
    ++hh;
    if (hh == 24) {
        hh == 0;
        return hh;
    } else {
        return 3;
    }
}
