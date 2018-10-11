#include <iostream>

using namespace std;

int podana;

int main()
{
    cout << "Podaj dzielnik: "; cin >> podana;

    for (int i = 1; i <= 100; i++) {
        if (i%podana == 0) {
            cout << i << "\n";
        }
    }
}
