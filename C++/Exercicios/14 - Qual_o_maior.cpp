#include <iostream>
using namespace std;

long int x, y;

main(){
	system("chcp 65001");

	cout << "Informe o valor de X: ";
	cin >> x;
	
	cout << "Informe o valor de Y: ";
	cin >> y;
	
	if (x > y) {
		cout << "\n\n\n X é maior";
	} else if (x < y) {
		cout << "\n\n\n Y é maior";
	} else {
		cout << "X é igual a Y";
	}
	
}
