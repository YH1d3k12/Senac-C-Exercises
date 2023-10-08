#include <iostream>
using namespace std;

int x;
int y;

main(){
	system("chcp 65001");

	cout << "\n\t Insira dois valores e veja qual é maior \n";
	
	//se X for maior que Y emprima X senão emprima Y
	
	cin >> x;
	cin >> y;
	
	if (x > y){
		cout << "X é maior que Y";
	} else if (x < y){
		cout << "Y é maior que X";
	} else {
		cout << "X e Y são iguais";
	}
	
}y