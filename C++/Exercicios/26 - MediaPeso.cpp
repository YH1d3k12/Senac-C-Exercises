#include <iostream>

using namespace std;

int i;
double peso, totalPeso;

main() {

	system("chcp 65001");
	
	for(i = 1; i <= 5; i++){
		cout << "Informe o peso do " << i << " individuo \n";
		cin >> peso;
		
		totalPeso += peso;
		cout << "O peso atual de todo mundo: " << totalPeso << "\n\n";
	}
	
	cout << "A media de peso foi de: " << totalPeso / 5;
		
}