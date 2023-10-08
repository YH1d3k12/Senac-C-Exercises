#include <iostream>

using namespace std;

int i, qtdPessoas;
float altura[99];

main() {
	system("chcp 65001");
	
	cout << "Informe a quantidade de pessoas \n";
	cin >> qtdPessoas;
	
	
	for(i = 1; i <= qtdPessoas; i++){
		cout << "Informe a altura do " << i << " individuo \n";
		cin >> altura[i-1];
	}
	
	for (i = 0; i < qtdPessoas; i++){
		altura[0] += altura[i+1];
	}
	
	cout << "A media de altura foi de: " << altura[0] / qtdPessoas;
}