#include <iostream>

using namespace std;

int wysokosc, iloscSpacji, iloscGwiazdek, juzSpacji, spacje;

int main()
{
    cout << "Podaj wysokosc: "; cin >> wysokosc;
    iloscSpacji = wysokosc - 1;
    iloscGwiazdek = (wysokosc-1)*2+1;

    for (int i = 0; i <= wysokosc; i++) {
        if (i == 0) {
           for (int x = 0; x < iloscSpacji; x++) {
            cout << " ";
           } cout << "#\n";
        }
        else {
                for (int z = 0; z < juzSpacji; z++){
                        cout << " ";
                    }
                for (int y = 0; y < iloscGwiazdek; y++){
                   cout << "*";
                }
            juzSpacji++;
            iloscGwiazdek = iloscGwiazdek - 2;
            cout << "\n";
        }
    }

    cout << "\n\n";

    iloscSpacji = wysokosc - 1;
    iloscGwiazdek = 1;

    for (int i = 0; i <= wysokosc; i++) {
        if (i == wysokosc) {
           for (int x = 0; x < (wysokosc -1); x++) {
            cout << " ";
           } cout << "#\n";
        }
        else {
                for (int z = 0; z < iloscSpacji; z++){
                        cout << " ";
                    }
                for (int y = 0; y < iloscGwiazdek; y++){
                   cout << "*";
                }
            iloscSpacji--;
            iloscGwiazdek = iloscGwiazdek + 2;
            cout << "\n";
        }
    }

    return 0;
}
