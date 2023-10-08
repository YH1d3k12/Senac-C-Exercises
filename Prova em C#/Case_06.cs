using System;

namespace Hello {

    public class Case06 {

        public static void PrinteAsteriscosPadraoOnda() {
            int tamanho, x = 0, xplus = 2, y = 1, yplus = 1, count = 0;
   
            Console.WriteLine("Exercício 06 - Djalma Hideki Yamamoto - 3° Lugar Kahoot!");
            Console.WriteLine("Informe o tamanho da onda");
            tamanho = Convert.ToInt32(Console.ReadLine());

            do {
				for (int i = 0; i < x; i++){
                    Console.Write("*");
				}
                Console.WriteLine("");
                
				xplus += 1;
				if (xplus == 3){
					x += 2;
					xplus = 0;
				}			
	
				for (int i = 0; i < y; i++){
					Console.Write("*");
				}
                Console.WriteLine("");

				yplus += 1;
				if (yplus == 3){
					y += 2;
					yplus = 0;
				}
	
				count += 1;
			} while (count != tamanho);

        }

    }
}

