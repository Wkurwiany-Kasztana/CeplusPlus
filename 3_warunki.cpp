#include <iostream>

using namespace std;

int podana, suma, liczbaLiczb, poprzednia;

int main() {

do {
    poprzednia = podana;
    cout << "Podaj liczbe: "; cin >> podana;
    suma = suma + podana;
    liczbaLiczb++;
} while ((suma < 100)&&(liczbaLiczb<10)&&(poprzednia!=podana));

return 0;
}

