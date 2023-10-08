#include <iostream>
using namespace std;

float nota_a, nota_b, nota_c;

main(){
	system("chcp 65001");

	cout << "\n\t Informe as notas do aluno em ordem \n";
	cin >> nota_a;
	cin >> nota_b;
	cin >> nota_c;
	
	cout << "\n A média é: " << ((nota_a * 2) + (nota_b * 3) + (nota_c * 5)) / 10;
}