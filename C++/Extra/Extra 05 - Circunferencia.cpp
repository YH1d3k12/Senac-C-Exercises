#include <iostream>
using namespace std;

float raio, diametro, circunferencia, area;


main(){
	system("chcp 65001");

	cout << "\n\t Informe o raio \n";
	cin >> raio;
	
	diametro = raio * 2;
	circunferencia = 2 * 3.14 * raio;
	area = 3.14 * (raio * raio);
	
	cout << "\n O diametro é: " << diametro;
	cout << "\n A circunferencia é: " << circunferencia;
	cout << "\n A área é: " << area;
}