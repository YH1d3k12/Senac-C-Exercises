#include <iostream>
using namespace std;


int valorInserido, segundos, minutos, horas;


main(){
	system("chcp 65001");

	cout << "\n\t Informe o tempo em segundos para converter em horas, minutos e segundos \n";
	cin >> valorInserido;
	
	horas = valorInserido / 3600;
	valorInserido -= horas * 3600;
	
	minutos = valorInserido / 60;
	valorInserido -= minutos * 60;
	
	segundos = valorInserido / 60;
	valorInserido -= segundos * 60;
	
	cout << horas << "hr(s) ";
	cout << minutos << "m(s) ";
	cout << valorInserido << "s";
	
}