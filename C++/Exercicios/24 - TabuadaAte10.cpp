#include <iostream>
using namespace std;

int numero, i;

main(){
	system("chcp 65001");

 	cout << "\tInforme um número inteiro e veja sua tabuada até 10!\n";
	cin >> numero;

	system("cls");
	for (i = 1; i < 11; i++){
	    cout << "\t" << numero << " x " << i << " = " << numero * i << "\n";
	}
}