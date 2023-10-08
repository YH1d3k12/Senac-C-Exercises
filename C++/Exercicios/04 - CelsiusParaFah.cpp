#include <iostream>
using namespace std;

double celsius;
double fahrenheit;


main(){
	system("chcp 65001");

	cout << "\n\t Informe a temperatura em celsius para descobrir seu valor em fahrenheit \n";
	cin >> celsius;
	
	fahrenheit = (9 * celsius + 160) / 5;
	
	
	cout << "\n A temperatura em fahrenheit é de: " << fahrenheit;
}