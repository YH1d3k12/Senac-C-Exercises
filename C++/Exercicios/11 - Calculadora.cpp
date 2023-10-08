#include <iostream>
using namespace std;

int operacao, numero_x, numero_y;

main(){
	system("chcp 65001");

	cout << "\nDigite o número de acordo com a operação matemática desejada!\n[1] - Adição, [2] - Subtração, [3] - Multiplicação, [4] - Divisão\n";
	cin >> operacao;
	system("cls");
	
	cout << "Agora informe dois números para performar a operação\n";
	cin >> numero_x;
	cin >> numero_y;
	
	if (operacao == 1) {
		cout << "Resultado: " << numero_x + numero_y;
	} else if (operacao == 2) {
		cout << "Resultado: " << numero_x - numero_y;
	} else if (operacao == 3) {
		cout << "Resultado: " << numero_x * numero_y;
	} else if (operacao == 4) {
		cout << "Resultado: " << numero_x / numero_y;
	} else {
		cout << "Sua opção de operação era invalida";
	}
	
}