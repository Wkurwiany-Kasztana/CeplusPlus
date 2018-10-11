
#include <iostream>
#include <math.h>


using namespace std;

int odp;

float PI = 3.14159;

float a;
float b;
float c;
float h;
float alfa;

int main ()	{
	cout << "Witaj w programie liczacy pole trojkata" <<endl;
	cout << "Jakie masz dane?" <<endl;
	cout << "[1] Dlugosc boku i wysokosci" <<endl;
	cout << "[2] Dlugosc dwoch bokow i zawarty miedzy nimi kat" <<endl;
	cout << "[3] Dlugosc trzech bokow" <<endl;
	cin >> odp;
	switch (odp)	{
		case 1:
			cout <<"\n";
			cout <<"Podaj dlugosc boku: ";
			cin >> a;
			cout <<"Podaj dlugosc wysokosci: ";
			cin >> h;
			cout <<"Pole tego trojkata wynosi: "<<a*h/2;
			break;
		case 2:
			cout <<"\n";
			cout <<"Podaj dlugosc boku a: ";
			cin >> a;
			cout <<"Podaj dlugosc boku b: ";
			cin >> b;
			cout <<"Podaj wartosc kata alfa: ";
			cin >> alfa;
			cout <<"Pole tego trojkata wynosi: "<<a*b*sin(alfa*PI/180)/2;
			break;
		case 3:
			cout <<"\n";
			cout <<"Podaj dlugosc boku a: ";
			cin >> a;
			cout <<"Podaj dlugosc boku b: ";
			cin >> b;
			cout <<"Podaj dlugosc boku c: ";
			cin >> c;
			float p;
			p=(a+b+c)/2;
			float pa;
			pa=p-a;
			float pb;
			pb=p-b;
			float pc;
			pc=p-c;
			cout <<"Pole tego trojkata wynosi: "<< sqrt(p*pa*pb*pc);
			break;
	}


	return 0;
}
