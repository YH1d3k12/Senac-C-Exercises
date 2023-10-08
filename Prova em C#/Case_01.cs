using System;

namespace Hello {

    public class Case01 {

        public static void CalcularSalarioAReceber() {
            decimal valorPorHora, horaTrabalhada;

            Console.WriteLine("Exercício 01 - Veja o quanto vai receber no fim do mês");
            Console.WriteLine("Qual o valor por hora?");

            valorPorHora = Convert.ToDecimal(Console.ReadLine());
            Console.WriteLine("Trabalhou por quantas horas este mês?");

            horaTrabalhada = Convert.ToDecimal(Console.ReadLine());
            Console.WriteLine($"O valor a receber este mês foi R$: " + (valorPorHora * horaTrabalhada));
        }

    }
}

