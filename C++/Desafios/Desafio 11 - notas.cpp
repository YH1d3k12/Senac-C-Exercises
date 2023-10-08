#include <iostream>

using namespace std;

float menorNota = 11, maiorNota = 0, media, nota[5];
int i, tamanhoTurma, piorAluno, melhorAluno;
string aluno[5];

main(){
	system("chcp 65001");
	
	cout << "\n\tInforme quantos alunos tem na turma\n";
	cin >> tamanhoTurma;
	
	system("cls");

//Interação com usuário, informa nome do aluno e sua nota.
	for (i = 0; i < tamanhoTurma; i++){
		cout << "\n\tAgora informe o nome do " << i+1 << "° aluno e em seguida sua nota!\n";
		cin >> aluno[i];
		cin >> nota[i];
		system("cls");
	}

//Captura a menor nota da turma e o pior aluno;
	for (i = 0; i < tamanhoTurma; i++) {
		if (nota[i] < menorNota) {
			menorNota = nota[i];
			piorAluno = i;
		}
	}
	cout << "A menor nota foi: " << menorNota << " do(a) aluno(a): " << aluno[piorAluno] << "\n";

//Captura a maior nota da turma e o melhor aluno;
	for (i = 0; i < tamanhoTurma; i++) {
		if (nota[i] > maiorNota) {
			maiorNota = nota[i];
			melhorAluno = i;
		}
	}
	cout << "A maior nota foi: " << maiorNota << " do(a) aluno(a): " << aluno[melhorAluno] << "\n";

//Insere as notas na variavel media;
	for (i = 0; i < tamanhoTurma; i++) {
		media += nota[i];
	}
	cout << "A média da turma foi: " << media / 5 << "\n";
}