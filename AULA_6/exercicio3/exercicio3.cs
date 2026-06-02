// See https://aka.ms/new-console-template for more information
using System;
using System.Runtime.CompilerServices;
class Program
{

        static string nome1, nome2, nome3, nome4, nome5;
       static string poder1, poder2, poder3, poder4, poder5;
       static int pontuacao1, pontuacao2, pontuacao3, pontuacao4, pontuacao5;

       
        
        static void cadastrarHeroi()

    
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
