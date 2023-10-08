#include <iostream>

using namespace std;

int IPI, preco1, qtd1, preco2, qtd2;


main() {
	system("chcp 65001");
	
	cout << "Informe o valor do IPI\n";
	cin >> IPI;
	
	cout << "Informe o preço do primeiro item\n";
	cin >> preco1;

	cout << "Informe a quantidade comprada\n";
	cin >> qtd1;
	
	cout << "Informe o preço do segundo item\n";
	cin >> preco2;

	cout << "Informe a quantidade comprada\n";
	cin >> qtd2;
	
	cout << "Valor total a ser pago: " << (preco1*qtd1 + preco2*qtd2) * (IPI/100 + 1);
}