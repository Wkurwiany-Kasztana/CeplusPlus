#include <iostream>

using namespace std;

int wybor, wysokosc, spacje, belka, przerwa;
char rysuj;

int main() {

    do {
        cout << "Podaj naturalna liczbe parzysta nie wieksza niz 20: "; cin >> wybor;
    } while ((wybor%2!=0)||(wybor>20)||(wybor<2));
    wysokosc = wybor;
    belka = (wysokosc/2)+1;

    for (int i = 1; i <= wysokosc; i++) {
        spacje = wysokosc - i;
        for (int i = 0; i < spacje; i++) {
            cout << " ";
        }
        if (i == 1) cout << "*";
        else if (i == 2) cout << "***";
        else {
            cout << "*";
            przerwa = (i-2)*2;
            if (i == belka) rysuj = '*';
            for (int i = 0; i < przerwa; i++) cout << rysuj;
            rysuj = ' ';
            cout << "**";
        }
        cout << "\n";
    }

    return 0;
}
