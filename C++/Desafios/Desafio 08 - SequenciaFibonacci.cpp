#include <iostream>

using namespace std;

int i, qtdTermos, resultadoAnterior, resultado;
int primeiroTermo = 0;
int segundoTermo = 1;


main() {
	system("chcp 65001");
	
	cout << "Informe a quantidade de termos \n";
	cin >> qtdTermos;
	
	cout << "0 igual ao 1° termo\n" << "1 igual ao 2° termo\n";

	for (i=3; i <= qtdTermos; i++){
		resultado = primeiroTermo + segundoTermo;
		
		cout << resultado << " igual ao " << i << "° termo\n";
		primeiroTermo = segundoTermo;
		
		segundoTermo = resultado;
	}
	

}