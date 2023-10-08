using System;

namespace Hello {

    public class Case08 {

        public static void BossFight() {
			int aHp = 100, bHp = 650, action;

			Console.WriteLine("\tPrepare-se para lutar!");
			Thread.Sleep(1500);

			do {
				Thread.Sleep(3000);
				Console.Clear();
				Random rnd = new Random();
				int atk = rnd.Next(45, 74);
				int heal = rnd.Next(20, 66);
				int magic = rnd.Next(201);

				Console.WriteLine($"Sua HP: {aHp}/100.");
				Console.WriteLine($"\n\n------Dragão HP: {bHp}/650------.\n");

				Console.WriteLine("Chegou o seu turno, o que você faz?\n[1] - atacar\n[2] - curar-se\n[3] - magia selvagem");
				action = Convert.ToInt32(Console.ReadLine());
				switch (action) {
					case 1: {
						Console.WriteLine($"Você ataca! Causando {atk} de Dano");
						bHp -= atk;
						aHp = BossAttack(aHp);
						break;
					}
					case 2: {
						Console.WriteLine($"Você se cura por {heal} pontos de vida");
						aHp += heal;

						if (aHp > 100) {
							aHp = 100;
						}

						aHp = BossAttack(aHp);
						break;
					}
					case 3: {
						Console.WriteLine($"Você usa magia selvagem! Causando {magic} de Dano");
						bHp -= magic;
						aHp = BossAttack(aHp);
						break;
					}
					default : {
						Console.WriteLine("Comando invalido!");
						break;
					}
				}

			} while (bHp > 0 && aHp > 0);

			Thread.Sleep(3000);
			Console.Clear();

			if (bHp <= 0) {
				Console.WriteLine("Parabéns você derrotou o Dragão!\n\t-recebeu 3.000xp\n\t-encountrou 350gp\n\t-Encontrou poção de cura");
			} else if (aHp <= 0) {
				Console.WriteLine("Você morreu! Gameover.");
			}

			Thread.Sleep(2000);
        }

		public static int BossAttack(int aHp) {
			Random rnd = new Random();
			int bossAction = rnd.Next(1,9);
			int garra = rnd.Next(9,27);
			int cauda = rnd.Next(7,20);
			int sopro = rnd.Next(15,51);

			if (bossAction <= 4) {
				Console.WriteLine($"O Dragão te ataca com as garras! causando: {garra} de dano!");
				aHp -= garra;
			} else if (bossAction <= 6) {
				Console.WriteLine($"O Dragão te ataca com sua cauda! causando: {cauda} de dano!");
				aHp -= cauda;
			} else {
				Console.WriteLine($"O Dragão usa seu FireBreath! causando: {sopro} de dano!");
				aHp -= sopro;
			}

			return aHp;
		}
    }
}