#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

int op, i, qtdPessoas, limiteVelocidade, veiculoVelocidade, aHp = 100, bHp = 650, action, atk;;
float altura[99], numero, nota[2], media, valorPorHora, horaTrabalhada;
int x = 0, y = 1, xplus = 2, yplus = 1, count = 0, qtd;

main() {
	system("chcp 65001");
	do{
		cout<<"\n \t Escolha uma opção a seguir: \n";
		cout<<"\n [1] Exercício 1";
		cout<<"\n [2] Exercício 2";
		cout<<"\n [3] Exercício 3";
		cout<<"\n [4] Exercício 4";
		cout<<"\n [5] Exercício 5";
		cout<<"\n [6] Use a sua criatividade";
		cout<<"\n [7] Encerrar \n";
		cout<<"\n [8] Boss Fight???!\n"; //Fiz na aula de quarta k;
		cin>>op;

		switch(op) {
			case 1: {
				system("cls");
				
				cout << "\n\tExercício 1 - Veja o quanto vai receber no fim do mês!\n";
				
				cout << "\nQual é o valor por hora?\n";
				cin >> valorPorHora;

				cout << "\nTrabalhou por quantas horas este mês? \n";
				cin >> horaTrabalhada;
	
				cout << "\nO valor a receber este mês foi R$: " << valorPorHora * horaTrabalhada << "\n";
				break;
			};
			case 2: {
				system("cls");
				
				cout << "\n\tExercício 2 - Informe as notas do aluno(a)!\n\n";
				
				for (i = 0; i < 3; i++) {
					cout << "Informe a " << i+1 << "° nota do aluno(a)\n";
					cin >> nota[i];
				}

				media = (nota[0] + nota[1] + nota[2]) / 3;
	
				if(media >= 7) {
					cout << "\nParabéns! Sua média foi: " << media << " Você foi aprovado!\n";
				} else if (media < 7 && media >= 5) {
					cout << "\nAtenção! Sua média foi: " << media << " Você está em recuperação!\n";
				} else {
					cout << "\nAlerta! Sua média foi: " << media << " Infelizmente você foi reprovado!\n";
				}
				break;
			};
			case 3: {
				system("cls");
				
				cout << "\n\tExercício 3 - Informe a velocidade permitida!\n\n";
				cin >> limiteVelocidade;
				
				cout << "\nAgora informe a velocidade do infrator!\n";
				cin >> veiculoVelocidade;
				
				system("cls");
	
				if (veiculoVelocidade <= limiteVelocidade) {
					cout << "\nNão passou o limite de velocidade!\n";
					cout << "O motorista não pagará multa!\n";
					
				} else if (veiculoVelocidade > limiteVelocidade && veiculoVelocidade <= limiteVelocidade * 1.2) {
					cout << "\nPassou até 20% da velocidade permitida!\n";
					cout << "O motorista receberá uma multa de R$: 102.00!\n";
						
				} else if (veiculoVelocidade > limiteVelocidade * 1.2) {
					cout << "\nPassou mais do que 20% da velocidade permitida!\n";
					cout << "O motorista receberá uma multa de R$: 500.00!\n";	
					
				};
				break;
			};
			case 4: {
				system("cls");
 				cout << "\n\tExercício 4 - Informe um número e veja sua tabuada de 0 a 10! \n";
				cin >> numero;
				
				system("cls");
				cout << "O--------------------------O\n";
				for (i = 0; i < 11; i++){
	 				cout << "\t" << numero << " x " << i << " = " << numero * i << "\n";
				}
				cout << "O--------------------------O";
				break;
			};
			case 5: {
				system("cls");
				cout << "\n\tExercício 5 - Informe a quantidade de pessoas! \n";
				cin >> qtdPessoas;
				
				for(i = 1; i <= qtdPessoas; i++){
					cout << "Informe a altura do " << i << " individuo \n";
					cin >> altura[i-1];
				}
	
				for (i = 1; i < qtdPessoas; i++){
					altura[0] += altura[i];
				}

				cout << "\nA media de altura foi: " << altura[0] / qtdPessoas << "\n";
				altura[0] = 0;
				break;
			};
			case 6: {
				system("cls");
				cout << "\n Exercício 6 -Informe a quantidade de termos\n";
				cout << "\n\t3° Lugar Kahoot - Djalma Hideki Yamamoto\n";
				cin >> qtd;
	
				system("cls");
				
				do {
					for (i=0;i<x;i++){
						cout << "*";
					}
		
					xplus += 1;
					if (xplus == 3){
						x += 2;
						xplus = 0;
					}	
					cout << "\n";
		
					for (i=0;i<y;i++){
						cout << "*";
					}
		
					yplus += 1;
					if (yplus == 3){
						y += 2;
						yplus = 0;
					}
					cout << "\n";
		
					count += 1;
				} while (count != qtd);
				break;
			};
			case 7: {
				cout<<"Finalizando";
				break;
			};
			case 8: {
					random_device rd;

					do {
						system("cls");
						cout << "\n Sua HP: " << aHp << " /100.";
						cout << "\n\n\t------Boss HP: " << bHp << "/650-----\n";
					
						cout << "\nChegou o seu turno, o que você faz?\n[1] - atacar\n[2] - curar-se\n[3] - magia selvagem\n";
						cin >> action;
		
						uniform_int_distribution<int> vilao(9,25);
	
						switch (action) {
			
							case 1: {
								uniform_int_distribution<int> heroi(15,33);
				
								atk = heroi(rd);
								bHp -= atk;
								cout << "Você ataca! causando: " << atk << " de dano!\n";
				
								atk = vilao(rd);
								aHp -= atk;
								cout << "O boss te ataca! causando: " << atk << " de dano!\n";
				
								cout << "\n\nDigite para prosseguir";
								getch();
								break;
							}
		
							case 2: {
								uniform_int_distribution<int> heroi(10,65);
				
								atk = vilao(rd);
								aHp -= atk;
								cout << "O boss te ataca! causando: " << atk << " de dano!\n";
				
								atk = heroi(rd);
								aHp += atk;
								cout << "Curou-se por: " << atk << " pontos de vida\n";
				
								if (aHp > 100) {
									aHp = 100;
								}
				
								cout << "\n\nDigite para prosseguir";
								getch();
								break;
							}
		
							case 3: {
								uniform_int_distribution<int> heroi(1,200);
				
								atk = heroi(rd);
								bHp -= atk;
								cout << "Conjurou magia selvagem! causando: " << atk << " de dano!\n";
				
				
								atk = vilao(rd);
								aHp -= atk;
								cout << "O boss te ataca! causando: " << atk << " de dano!\n";
				
								cout << "\n\nDigite para prosseguir";
								getch();
								break;
							}
							default: {
								cout << "Passou o turno!\n";
				
								atk = vilao(rd);
								aHp -= atk;
								cout << "O boss te ataca! causando: " << atk << " de dano!\n";

								cout << "\n\nDigite para prosseguir";
								getch();
								break;
							}
						}
	
					} while (bHp > 0 && aHp > 0);
	
					system("cls");
	
					if (bHp <= 0) {
						cout << "\n\tParabéns! Você matou o boss!\n\t-recebeu 3.000xp\n\t-encountrou 350gp\n\t-Encontrou poção de cura\n\n";
					} else if (aHp <= 0) {
						cout << "\n\tGame Over! Você morreu!\n";
					}
					break;
				}
			default: {
				cout<<"\nOpção inválida";
				break;
			}
		}
	} while(op != 7);
	cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}