#include <iostream>

using namespace std;

int limiteVelocidade, veiculoVelocidade;

main() {
	system("chcp 65001");
	
	cout << "Informe a velocidade permitida!\n";
	cin >> limiteVelocidade;
	cout << "Agora informe a velocidade do infrator!\n";
	cin >> veiculoVelocidade;
	
	system("cls");
	
	if (veiculoVelocidade <= limiteVelocidade) {
		cout << "Não passou o limite de velocidade!\n";
		cout << "O motorista não pagará multa!";
		
	} else if (veiculoVelocidade > limiteVelocidade && veiculoVelocidade <= limiteVelocidade * 1.2) {
		cout << "Passou até 20% da velocidade permitida!\n";
		cout << "O motorista receberá uma multa de R$: 102.00!";
		
	} else if (veiculoVelocidade > limiteVelocidade * 1.2) {
		cout << "Passou mais do que 20% da velocidade permitida!\n";
		cout << "O motorista receberá uma multa de R$: 500.00!";
	};

}