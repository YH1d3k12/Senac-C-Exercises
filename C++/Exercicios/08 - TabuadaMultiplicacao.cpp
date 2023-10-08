#include <iostream>
using namespace std;

float numero, resultado;
int i;


main(){
	system("chcp 65001");

	cout << "\n\t Insira um número \n";
	cin >> numero;
	system("cls");

	for (i = 1; i <= 10; i++){ 
    	resultado = numero * i;
    	cout << numero << " x " << i << " = " << resultado << "\n";
	}
}