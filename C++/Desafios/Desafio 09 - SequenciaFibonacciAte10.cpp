#include <iostream>

using namespace std;

int i, resultadoAnterior, resultado;
int primeiroTermo = 0;
int segundoTermo = 1;


main() {
	system("chcp 65001");
	
	cout << "\n\tVeja a sequência de Fibonacci até 10 \n\n\n";

	
	cout << "0 igual ao 1° termo\n" << "1 igual ao 2° termo\n";

	for (i=3; i <= 10; i++){
		resultado = primeiroTermo + segundoTermo;
		
		cout << resultado << " igual ao " << i << "° termo\n";
		primeiroTermo = segundoTermo;
		
		segundoTermo = resultado;
	}
	

}