using System;

namespace Hello {

    public class Prova {

        public static void Principal() {
            int op;

            do {
                Console.Clear();
                Console.WriteLine("Escolha uma opção a seguir: ");
                Console.WriteLine("[1] Exercício 1");
                Console.WriteLine("[2] Exercício 2");            
                Console.WriteLine("[3] Exercício 3");
                Console.WriteLine("[4] Exercício 4");
                Console.WriteLine("[5] Exercício 5");
                Console.WriteLine("[6] Exercício 6");
                Console.WriteLine("[7] Encerrar");
                Console.WriteLine("[8] Boss Fight???!");
                op = Convert.ToInt32(Console.ReadLine());

                switch (op){
                    case 1: {
                        Console.Clear();
                        Case01.CalcularSalarioAReceber();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 2: {
                        Console.Clear();
                        Case02.CalcularMediaDoAluno();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 3: {
                        Console.Clear();
                        Case03.CalcularVelocidadeEMulta();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 4: {
                        Console.Clear();
                        Case04.CalcularTabuadaAteDez();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 5: {
                        Console.Clear();
                        Case05.CalcularMediaAlturaEntrePessoas();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 6: {
                        Console.Clear();
                        Case06.PrinteAsteriscosPadraoOnda();
                        Thread.Sleep(3000);
                        break;
                    }
                    case 8: {
                        Console.Clear();
                        Case08.BossFight();
                        Thread.Sleep(3000);
                        break;
                    }
                }

            } while (op != 7);
        }
    }
}

