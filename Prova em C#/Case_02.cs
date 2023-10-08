using System;

namespace Hello {

    public class Case02 {

        public static void CalcularMediaDoAluno() {
            decimal media = 0;
            decimal[] nota = new decimal[3];

            Console.WriteLine("Exercício 02 - Informe as notas do aluno(a)!");

            for (int i = 0; i < nota.Length; i++) {
                Console.WriteLine($"Informe a {i+1}° nota do aluno(a)");
			    nota[i] = Convert.ToDecimal(Console.ReadLine());

                media += nota[i];
            }

            media /= nota.Length;

            if(media >= 7) {
                Console.WriteLine($"Parabéns! Sua média foi: {media} Você foi aprovado!");
			} else if (media < 7 && media >= 5) {
                Console.WriteLine($"Atenção! Sua média foi: {media} Você está em recuperação");
			} else {
                Console.WriteLine($"Alerta! Sua média foi: {media} Infelizmente você foi reprovado!");
			}
        }

    }
}

