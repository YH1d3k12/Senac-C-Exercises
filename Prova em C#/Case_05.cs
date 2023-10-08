using System;

namespace Hello {

    public class Case05 {

        public static void CalcularMediaAlturaEntrePessoas() {
            int qtdPessoas;

            Console.WriteLine("Exercício 05 - Informe a quantidade de pessoas!");
            qtdPessoas = Convert.ToInt32(Console.ReadLine());

            decimal[] altura = new decimal[qtdPessoas];

            for(int i = 1; i <= qtdPessoas; i++){
                Console.WriteLine($"Informe a altura do {i} individuo");
                altura[i-1] = Convert.ToDecimal(Console.ReadLine());
			}

            for (int i = 1; i < qtdPessoas; i++){
				altura[0] += altura[i];
			}

            Console.WriteLine($"A media de altura entre as pessoas foi {altura[0] / qtdPessoas}");
            altura[0] = 0;
        }

    }
}

