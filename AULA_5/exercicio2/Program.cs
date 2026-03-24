using System;
namespace exercicio2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("---ADIVINHADOR DE NÚMEROS---");
            Console.WriteLine("Tente adivinhar o número entre 1 e 100!");
            Random numaleatorio = new Random();
            int valorinteiro = numaleatorio.Next(1, 100);

            do
            {
                Console.WriteLine("Digite um número: ");
                int numero = int.Parse(Console.ReadLine());
                if (numero < valorinteiro)
                {
                    Console.WriteLine("O número é maior do que " + numero);
                }
                else if (numero > valorinteiro)
                {
                    Console.WriteLine("O número é menor do que " + numero);
                }
                else
                {
                    Console.WriteLine("Parabéns voçê acertoiu o número " + valorinteiro);
                    break;
                }

                
            } while (true);
        }
    }
 }

