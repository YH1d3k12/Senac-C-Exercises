#include <iostream>
using namespace std;

int A;
int B;
int C;

main(){
	system("chcp 65001");

	cout << "\n\t Informe A e B e troque seus valores! \n";
	
	cin >> A;
	cin >> B;
	
	C = A;
	
	cout << "\n Valor de A: " << A;
	cout << "\n Valor de B: " << B;
	
	A = B;
	B = C;
	
	cout << "\n Valor de A agora é de: " << A;
	cout << "\n Valor de B agora é de: " << B;
}