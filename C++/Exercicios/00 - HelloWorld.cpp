#include <iostream>
using namespace std;

int n1;
int n2;
int n3;
int resultado;

main(){
	system("chcp 65001");
	cout << "\n\t Hello World \n";

	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	resultado = (n1 + n2) * n3;
	
	
	cout << "\n soma dos números:" << resultado;
}