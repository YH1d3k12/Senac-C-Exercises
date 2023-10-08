using System;

namespace Hello {

    public class Case03 {

        public static void CalcularVelocidadeEMulta() {
            int limiteVelocidade, veiculoVelocidade;

            Console.WriteLine("Exercício 03 - Informe a velocidade permitida!");
            limiteVelocidade = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Agora informe a velocidade do infrator!");
            veiculoVelocidade = Convert.ToInt32(Console.ReadLine());

            if (veiculoVelocidade <= limiteVelocidade) {
                Console.WriteLine("Não passou o limite de velocidade!");
                Console.WriteLine("O motorista não pagará multa!");
			} else if (veiculoVelocidade > limiteVelocidade && veiculoVelocidade <= limiteVelocidade * 1.2) {
                Console.WriteLine("Passou até 20% da velocidade permitida!");
                Console.WriteLine("O motorista receberá uma multa de R$: 102.00!");
			} else if (veiculoVelocidade > limiteVelocidade * 1.2) {
                Console.WriteLine("Passou mais do que 20% da velocidade permitida!");
                Console.WriteLine("O motorista receberá uma multa de R$: 500.00!");
			}
        }

    }
}

