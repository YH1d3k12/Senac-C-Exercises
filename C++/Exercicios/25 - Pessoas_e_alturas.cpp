#include <iostream>

using namespace std;

int i, qtdPessoas;
double altura, totalAltura;

main() {
	system("chcp 65001");
	
	cout << "Informe a quantidade de pessoas \n";
	cin >> qtdPessoas;
	
	
	for(i = 1; i <= qtdPessoas; i++){
		cout << "Informe a altura do " << i << " individuo \n";
		cin >> altura;
		
		totalAltura += altura;
		cout << "Altura atual de todo mundo: " << totalAltura << "\n\n";
	}
	
	cout << "A media de altura foi de: " << totalAltura / qtdPessoas;
}