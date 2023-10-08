#include <iostream>

using namespace std;

int pergunta1, pergunta2, pergunta3, pergunta4, pergunta5, pergunta6, pergunta7, pergunta8, veredito;

main() {
	system("chcp 65001");
	
	cout << "\n\tResponda o questionário a seguir com 0 - Falso e 1 - Verdadeiro\n\n";
	
	cout << "Trocou mensagens com a vítima?\n";
	cin >> pergunta1;
	cout << "Esteve no local do crime?\n";
	cin >> pergunta2;
	cout << "É parente ou reside perto da vítima?\n";
	cin >> pergunta3;
	cout << "Devia algum valor para a vítima?\n";
	cin >> pergunta4;
	cout << "Trabalha ou trabalhou com a vítima?\n";
	cin >> pergunta5;
	cout << "Possui algum tipo de relacionamento amoroso com a vítima?\n";
	cin >> pergunta6;
	cout << "Ficou feliz pelo destino fatídico na vítima?\n";
	cin >> pergunta7;
	cout << "Possui algum tipo de arma de fogo?\n";
	cin >> pergunta8;
	
	veredito = pergunta1 + pergunta2
}