#include <iostream>

using namespace std;

int soma(int a, int b);

int a, b, result;

main() {
	system("chcp 65001");
	
	cin >> a;
	cin >> b;
	
	result = soma(a, b);
	
	cout << result;
	
}

int soma(int a, int b){
	return a + b;	
}