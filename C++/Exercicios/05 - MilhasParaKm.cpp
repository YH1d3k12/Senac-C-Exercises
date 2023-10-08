#include <iostream>
using namespace std;

double milhas;
double quilometros;


main(){
	system("chcp 65001");

	cout << "\n\t Informe a distância em milhas para descobrir seu valor em quilometros \n";
	cin >> milhas;
	
	quilometros = milhas * 1.60934;
	
	
	cout << "\n A distância em quilometros é de: " << quilometros;
}