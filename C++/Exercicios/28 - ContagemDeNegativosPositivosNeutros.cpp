#include <iostream>

using namespace std;

double numero;
int i, totalPositivo, totalNegativo, totalNeutro;

main() {
	system("chcp 65001");
	
	cout << "Informe 10 números e veja quantos deles são negativos e positivos! \n";
	
	for(i = 1; i <= 10; i++){
		cout << "Informe o " << i << " número\n";
		cin >> numero;
		
		if (numero > 0){
			totalPositivo += 1;
		} else if (numero < 0) {
			totalNegativo += 1;
		} else {
			totalNeutro += 1;
		}
	}
	
	cout << "Total de números positivos: " << totalPositivo << "\nTotal de números negativos: " << totalNegativo
	<< "\nTotal de números neutros: " << totalNeutro;

}