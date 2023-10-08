#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

int aHp = 100, bHp = 650, action, atk;

main(){
	system("chcp 65001");

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
				uniform_int_distribution<int> heroi(1,99);
				
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
		cout << "\n\tParabéns! Você matou o boss!\nrecebeu 3.000xp\nencountrou 350gp\nEncontrou poção de cura";
	} else if (aHp <= 0) {
		cout << "\n\tGame Over! Você morreu!\n";
	}
}