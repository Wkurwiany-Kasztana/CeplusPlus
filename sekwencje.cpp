#include <iostream>

using namespace std;

int doWypisania = 10;
int timer = 5000000; //im wieksza liczba tym wolniej sie wypisuje jak cos wiec jak wpiszecie 9999999999 to mozecie sie nie doczekac

int main()
{

    for (int i = 1; i <= doWypisania; i++) {
        cout << i << "\n";
        for (int y = 0; y < timer; y++)
        {
            cout << "";
        }
    }

    cout << "\n\n";

    for (int i = doWypisania; i >= 1; i--) {
        cout << i << "\n";
        for (int y = 0; y < timer; y++)
        {
            cout << "";
        }
    }

    return 0;
}
