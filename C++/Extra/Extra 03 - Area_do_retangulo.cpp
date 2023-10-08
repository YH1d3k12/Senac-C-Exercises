#include <iostream>
using namespace std;

float altura, base, area, perimetro;

main(){
	system("chcp 65001");

	cout << "\n\t Informe a altura e base do retangulo \n";
	
	cin >> altura;
	cin >> base;
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	cout << "\n A área do retangulo é: " << area;
	cout << "\n O perimetro do retangulo é: " << perimetro;
}