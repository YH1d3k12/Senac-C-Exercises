#include <iostream>
using namespace std;

int n1;
int n2;
int resultado;

main(){
	system("chcp 65001");

	cout << "\n\t digite um número \n";
	cin >> n1;
	cin >> n2;
	
	resultado = n1 + n2;
	
	
	cout << "\n soma dos números: " << resultado;
}