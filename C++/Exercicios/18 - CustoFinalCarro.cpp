#include <iostream>

using namespace std;

int custo, custoFinal;


main() {
	system("chcp 65001");
	
	cout << "\n\tInforme o custo de fábrica do carro e veja seu preço final\n\n";
	cin >> custo;
	
	custoFinal = custo * 1.28 * 1.45;
	
	cout << "\nCusto final do carro é de R$: " << custoFinal;
	
	
}