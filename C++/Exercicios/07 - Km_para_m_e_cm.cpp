#include <iostream>
using namespace std;

double km;
double m;
double cm;


main(){
	system("chcp 65001");

	cout << "\n\t Informe o valor de KM \n";
	cin >> km;
	
	m = km * 1000;
	cm = m * 100;

	cout << "\n Valor em metros é de: " << m << "m";
	cout << "\n Valor em cm é de: " << cm << "cm";

}