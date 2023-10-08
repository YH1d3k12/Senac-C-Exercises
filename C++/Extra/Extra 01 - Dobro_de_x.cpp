#include <iostream>
using namespace std;

int x;

main(){
	system("chcp 65001");

	cout << "\n\t Insira um número e veja seu dobro! \n";
	cin >> x;
	
	x *= 2;
	
	cout << "\n O dobro de x é: " << x;

}