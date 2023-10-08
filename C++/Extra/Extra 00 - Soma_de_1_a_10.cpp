#include <iostream>
using namespace std;

int n;

main(){
	system("chcp 65001");
	
	cout << "\n\t Veja a soma dos números de 1 a 10 \n";

	
	for (int i = 0; i < 11; i++){ 
    	n += i;
    	cout << n << "\n";
	}
	
	cout << "\n Resultado da soma é: " << n;
}