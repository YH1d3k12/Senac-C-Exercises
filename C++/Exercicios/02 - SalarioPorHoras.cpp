#include <iostream>
using namespace std;

float horas_trabalhadas, valor_por_hora;

main(){
	system("chcp 65001");

	cout << "\n\tQual é o salario por hora?\n";
	cin >> valor_por_hora;

	cout << "\n\tQuantas horas foram trabalhadas? \n";
	cin >> horas_trabalhadas;
	
	cout << "\nO valor a receber este mês foi R$: " << valor_por_hora * horas_trabalhadas;
}