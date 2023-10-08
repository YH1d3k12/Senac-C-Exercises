#include <iostream>

using namespace std;

int i;
float taxa, tempo, capital, juros;


main() {
	system("chcp 65001");
	
	cout << "Informe o capital que foi emprestado\n";
	cin >> capital;

	cout << "Informe a taxa\n";
	cin >> taxa;
	
	cout << "Informe os dias de atraso\n";
	cin >> tempo;
	
	juros = capital * taxa;
	
	for (i=1; i <= tempo; i++){
		
		capital += juros;
	//	cout << i << " Dia(s) de atraso " << capital << " Montante atual\n";
	}
	
	cout << "Montante final de: " << capital;
}