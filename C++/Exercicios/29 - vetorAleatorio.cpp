#include <iostream>
#include <random>

using namespace std;

int i, numero, vetor[15];

main(){
	system("chcp 65001");
	
	random_device rd;
	uniform_int_distribution<int> dist(1,9);
	
	for (i = 0; i <= 14; i++){
		numero = dist(rd);
		vetor[i] = numero;
		
		cout << i << "° Indice, valor: "<< vetor[i] << "\n";
	}

}