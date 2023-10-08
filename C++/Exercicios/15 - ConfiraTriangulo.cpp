#include <iostream>
#include <cmath>
using namespace std;

int A, B, C;


main(){
	system("chcp 65001");

	cout << "Informe o valor do segmento A \n";
	cin >> A;
	
	cout << "Informe o valor do segmento B \n";
	cin >> B;
	
	cout << "Informe o valor do segmento C \n";
	cin >> C;
	
	if (A + B > C && A + C > B && B + C > A) {
		cout <<"Os valores dos segmentos podem formar um triângulo \n";			
		if (A == B && A == C && B == C){
			cout << "É um triângulo de lados iguais (equilátero) \n";
			cout << "Valor da área é de: " << ((A * A) * (cbrt(3))) / 4;	
		} else if (A == B || A == C || B == C){
			cout << "É um triângulo com dois lados iguais (isósceles)";
		} else {
			cout << "É um triângulo com medidas distintas (escaleno)";
		}		
	} else {
		cout <<"Não há como formar um triângulo \n" << A << ": Valor de A \n"
		<< B << ": Valor de B \n" <<  C << ": Valor de C";
	}
	
}