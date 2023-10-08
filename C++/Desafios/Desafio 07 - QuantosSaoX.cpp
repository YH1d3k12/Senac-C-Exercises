#include <iostream>

using namespace std;


int i, numero, totalNegativo, totalPositivo, totalNeutro, totalPar, totalMultiploDe7;

main() {
	system("chcp 65001");
	
	cout << "Informe 10 números e veja a categoria que eles se encaixam! \n";
	
	for(i = 1; i <= 10; i++){
		cout << "Informe o " << i << " número\n";
		cin >> numero;
		
		if (numero > 0 && numero % 2 == 0 && numero % 7 == 0){
			totalPositivo += 1;
			totalPar += 1;
			totalMultiploDe7 += 1;
		} else if (numero > 0 && numero % 7 == 0) {
			totalPositivo += 1;
			totalMultiploDe7 += 1;
		} else if (numero > 0 && numero % 2 == 0) {
			totalPositivo += 1;
			totalPar += 1;
		} else if (numero > 0) {
			totalPositivo += 1;
		} else if (numero < 0) {
			totalNegativo += 1;
		} else {
			totalNeutro += 1;
		}
	}

	cout << "Total de números positivos: " << totalPositivo << "\nTotal de números negativos: " << totalNegativo
	<< "\nTotal de números neutros: " << totalNeutro << "\nTotal de números pares: " << totalPar <<
	"\nTotal de números multiplos de 7: " << totalMultiploDe7;
	
}