
// See https://aka.ms/new-console-template for more information
using System;

int[] numeros = new int[10];
int[] numspar = new int[10];
int[] numsimpar = new int[10];



for (int i = 0; i < 10; i++)
{
    Console.WriteLine("Digite um número: ");
    numeros[i] = int.Parse(Console.ReadLine());
    if (numeros[i] % 2 == 0)
    {
        numspar[i] = numeros[i];
    }
    else
    {
        numsimpar[i] = numeros[i];
    }
}
Console.WriteLine("Números pares: ");
for (int i = 0; i < 10; i++)
{
    Console.WriteLine(numspar[i]);
}
Console.WriteLine("Números ímpares: ");
for (int i = 0; i < 10; i++)
{
    Console.WriteLine(numsimpar[i]);
}