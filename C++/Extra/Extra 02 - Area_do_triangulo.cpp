#include <iostream>
using namespace std;

double base, altura, area;


main(){
	system("chcp 65001");

	cout << "\n\t Informe a base e altura do triangulo \n";
	cin >> base;
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << "\n A área do triangulo é: " << area;
}