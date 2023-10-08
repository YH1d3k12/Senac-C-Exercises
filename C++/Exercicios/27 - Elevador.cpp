#include <iostream>

using namespace std;

int i, qtdPessoas;
double peso, totalPeso;

main() {
	system("chcp 65001");
	
	cout << "Informe a quantidade de pessoas \n";
	cin >> qtdPessoas;
	
	
	for(i = 1; i <= qtdPessoas; i++){
		cout << "Informe o peso do " << i << " individuo \n";
		cin >> peso;
		
		totalPeso += peso;
	}
	
	if (totalPeso <= 180) {
		cout << "O elevador está perfeitamente operante em suas capacidades de carga!";
	} else {
		cout << "Alerta capacidade de carga excedida! O elevador tem: " << totalPeso - 180 << "KG acima da capacidade máxima!";
	}
}