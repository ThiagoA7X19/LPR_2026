// See https://aka.ms/new-console-template for more information
using System;
using System.Runtime.CompilerServices;
class Program
{
    static void cadastrarHeroi()
    {
        Console.WriteLine("Digite o nomde do herói da Marvel: ");
        string nome = Console.ReadLine();
        Console.WriteLine("Digite o poder do herói: ");
        string poder = Console.ReadLine();
        Console.WriteLine("Digite a pontuação do herói: ");
        int pontuacao = int.Parse(Console.ReadLine());

    }
    static void Main(string[] args)
    {
        int quantidadeHerois = 0;
        while (quantidadeHerois < 5)
        {
            Console.WriteLine($"Cadastro do herói {quantidadeHerois + 1}");
            cadastrarHeroi();
            quantidadeHerois++;
        }
    }
}   
