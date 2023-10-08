#include <iostream>
using namespace std;

double idade;
int meses, dias;

main(){
	system("chcp 65001");

	cout << "\n\t Informe a sua idade \n";
	cin >> idade;
	
	meses = idade * 12;
	dias = idade * 365.25;
	
	
	cout << "\n Sua idade em meses é de: " << meses << " meses";
	cout << "\n Sua idade em dias é de: " << dias << " dias";
}