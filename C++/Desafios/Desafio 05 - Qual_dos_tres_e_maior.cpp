#include <iostream>

using namespace std;

int n1, n2, n3;

main() {
	system("chcp 65001");
	
	cout << "\n\tInforme três números e veja qual é menor!\n\n";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	if (n1 > n2 && n1 > n3) {
		cout << n1 << " É o maior valor que " << n2 << " e " << n3;
	} else if (n2 > n1 && n2 > n3) {
		cout << n2 << " É o maior valor que " << n1 << " e " << n3;
	} else if (n3 > n1 && n3 > n2) {
		cout << n3 << " É o maior valor que " << n1 << " e " << n2;
	} else {
		cout << "Todos os números são iguais";
	}
}