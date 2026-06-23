// See https://aka.ms/new-console-template for more information
using System;
using System.Formats.Asn1;

namespace exercicio4
{
public struct Heroi
    {
        public string Nome;
        public string Poder;
        public int pontuacao;
    }
    class Program
    { 
        static Heroi[] herois = new Heroi[5];
        

     static void cadastrarHeroi()
        {
            int contador = 0;

            while (contador < 5){
                Console.WriteLine($"Heói {contador + 1}:");
                Console.Write("Digite o nome do herói: ");
                herois[contador].Nome = Console.ReadLine() ?? "";
                Console.Write("Digite o poder do herói: ");
                herois[contador].Poder = Console.ReadLine() ?? "";
                Console.Write("Digite a pontuação do herói: ");
                herois[contador].pontuacao = int.Parse(Console.ReadLine() ?? "0");
                Console.WriteLine();
                contador++;
            }
        }

       
        static void Main(string[] args)
        {
            cadastrarHeroi();
            Console.WriteLine("\nLista de Heróis Cadastrados:");

            int i = 0;
            while (i < 5)
            {
                Console.WriteLine($"Herói {i + 1}:");
                Console.WriteLine($"Nome: {herois[i].Nome}");
                Console.WriteLine($"Poder: {herois[i].Poder}");
                Console.WriteLine($"Pontuação: {herois[i].pontuacao}");
                Console.WriteLine();
                i++;
            }
        }
    }
}