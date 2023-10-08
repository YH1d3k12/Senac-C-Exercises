using System;

namespace Hello {

    public class Case04 {

        public static void CalcularTabuadaAteDez() {
            int numero;

            Console.WriteLine("Exercício 04 - Informe um número e veja sua tabuada de 0 a 10!");
            numero = Convert.ToInt32(Console.ReadLine());

            Console.Clear();
            
            Console.WriteLine("O--------------------------O");
            for (int i = 0; i < 11; i++){
                Console.WriteLine($"{numero} x {i} = {numero * i}");
            }
            Console.WriteLine("O--------------------------O");
        }

    }
}

