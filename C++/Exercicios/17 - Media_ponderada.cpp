#include <iostream>

using namespace std;

int nota1, nota2, nota3;


main() {
	system("chcp 65001");
	
	cout << "\n\tInforme as três notas do semestre e veja a media\n\n";
	cin >> nota1;
	cin >> nota2;
	cin >> nota3;
	
	nota1 *= 2;
	nota2 *= 3;
	nota3 *= 5;
	
	cout << "Sua media foi de: " << (nota1 + nota2 + nota3) / 10;
}