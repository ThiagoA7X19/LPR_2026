using System;
int[] numeros = new int[10];
Console.WriteLine("Qual é o número que deseja procurar?");
int numeroProcurado = int.Parse(Console.ReadLine());
for (int i = 0; i < numeros.Length; i++)
{
    Console.WriteLine($"Digite o número {i + 1}:");
    numeros[i] = int.Parse(Console.ReadLine());
}
bool encontrado = false;
for (int i = 0; i < numeros.Length; i++)
{
    if (numeros[i] == numeroProcurado)
    {
        encontrado = true;
        break;
    }
}
if (encontrado)
{
    Console.WriteLine("Número encontrado.");
}
else
{
    Console.WriteLine("Número não encontrado.");
}