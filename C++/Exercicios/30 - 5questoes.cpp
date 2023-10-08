#include <iostream>
#include <random>

using namespace std;

int i, numero, vetor[5];

main(){
	system("chcp 65001");
	
	random_device rd;	
	for (i = 0; i <= 4; i++){
		
		if (i == 0) {
			uniform_int_distribution<int> dist(1,8);
			numero = dist(rd);
			vetor[i] = numero;
			
		} else if (i == 1) {
			uniform_int_distribution<int> dist(9,16);
			numero = dist(rd);
			vetor[i] = numero;
			
		} else if (i == 2) {
			uniform_int_distribution<int> dist(17,22);
			numero = dist(rd);
			vetor[i] = numero;
			
		} else if (i == 3) {
			uniform_int_distribution<int> dist(23,28);
			numero = dist(rd);
			vetor[i] = numero;
			
		} else if (i == 4) {
			uniform_int_distribution<int> dist(24,29);
			numero = dist(rd);
			vetor[i] = numero;
			
		}
		
		cout << i << "° Indice, valor: "<< vetor[i] << "\n";
	}

}