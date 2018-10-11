#include <iostream>

using namespace std;

int podana, doWypisania;

int main()
{
    cout << "Podaj liczbe dowlolna liczbe dodatnia: "; cin >> podana;

    if (podana%2 == 0) doWypisania = podana+2;
    else doWypisania = podana+1;

    for (int i = 1; i <= 100; i++) {
        cout << i << ". " << doWypisania << "\n";
        doWypisania += 2;
    }

    return 0;
}
