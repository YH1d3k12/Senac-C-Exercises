#include <iostream>
using namespace std;

float altura, resultadoIMC;
char sexo;

main(){
	system("chcp 65001");

	cout << "Informe sua altura \n";
	cin >> altura;
	
	cout << "Informe seu sexo, [m] - mulher [h] - homem \n";
	cin >> sexo;
	
	if (sexo == 'h' || sexo == 'H') {
		resultadoIMC = (72.7 * altura) - 58;
		cout << "Resultado de seu IMC (Masculino) foi: " << resultadoIMC;
	} else if (sexo == 'm' || sexo == 'M') {
		resultadoIMC = (62.1 * altura) - 44.7;
		cout << "Resultado de seu IMC (Feminino) foi: " << resultadoIMC;	
	} else {
		cout << "Opção do sexo invalida";
	}

}