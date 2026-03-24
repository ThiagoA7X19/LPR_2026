using System;
namespace exercicio1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("calculadora de média aritmética:");
            Console.Write("Digite a quantidade de números: ");
            int quantidade = int.Parse(Console.ReadLine());
            
            int contador = 0;
            int qtdeNumeros = 0;
            double soma = 0;

            while (contador < quantidade)
            {
                Console.Write("Digite os números: ");
                int numero = int.Parse(Console.ReadLine());

                if (numero %2 == 0)
                {
                    soma += numero;
                    qtdeNumeros++;
                }
                contador++;
            }
              if (qtdeNumeros > 0)
                {
                    double media = soma / qtdeNumeros;
                    Console.WriteLine("A média dos números pares é: " + media);
                }
                else
                {
                    Console.WriteLine("Nenhum número par foi digitado.");
                }           
        }
    }
}