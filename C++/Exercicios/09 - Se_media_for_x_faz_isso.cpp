#include <iostream>
using namespace std;

int i;
float nota[2], media;

main(){
	system("chcp 65001");
	
	for (i = 0; i < 3; i++) {
		cout << "Informe a " << i+1 << "° nota do aluno(a)\n";
		cin >> nota[i];
	}

	media = (nota[0] + nota[1] + nota[2]) / 3;
	
	if(media >= 7) {
		cout << "Parabéns! Sua média foi: " << media << " Você foi aprovado!";
	} else if (media < 7 && media >= 5) {
		cout << "Atenção! Sua média foi: " << media << " Você está em recuperação!";
	} else {
		cout << "Alerta! Sua média foi: " << media << " Infelizmente você foi reprovado!";
	}
	
}
