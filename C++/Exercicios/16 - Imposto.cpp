#include <iostream>

using namespace std;

int salarioMinimo = 1320;
int CPF, nDependentes, rendaMensal, rendaFinal;


main(){
	system("chcp 65001");

	cout << "Informe seu CPF \n";
	cin >> CPF;
	
	cout << "Informe o número de dependentes \n";
	cin >> nDependentes;
	
	cout << "Informe sua renda mensal \n";
	cin >> rendaMensal;
	
	rendaFinal = rendaMensal - (rendaMensal * (nDependentes * 0.05));
	
	if (rendaFinal <= salarioMinimo*2) {
		cout << "Está isento de imposto";
	} else if (rendaFinal > salarioMinimo*2 && rendaFinal <= salarioMinimo*3) {
		cout << "Individuo de CPF: " << CPF << " O valor do imposto de renda a ser cobrado é de R$: " << rendaFinal * 0.05;
	} else if (rendaFinal > salarioMinimo*3 && rendaFinal <= salarioMinimo*5) {
		cout << "Individuo de CPF: " << CPF << " O valor do imposto de renda a ser cobrado é de R$: " << rendaFinal * 0.1;
	} else if (rendaFinal > salarioMinimo*5 && rendaFinal <= salarioMinimo*7) {
		cout << "Individuo de CPF: " << CPF << " O valor do imposto de renda a ser cobrado é de R$: " << rendaFinal * 0.15;
	} else {
		cout << "Individuo de CPF: " << CPF << " O valor do imposto de renda a ser cobrado é de R$: " << rendaFinal * 0.20;
	}

}