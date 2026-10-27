namespace exercicio2
{
    public class funcionario
    {
        public string nome;
        public double salario_liq;
        public double salario_bruto;
    
    public double imposto()
    {
        if (salario_bruto <= 2000)
    {
        return salario_bruto * 0.10;
    }
    else if (salario_bruto <= 5000)
    {
        return salario_bruto * 0.20;
    }
    else
    {
        return salario_bruto * 0.30;
        
    }
    }

    public double salario_liquido()
    {
        return salario_bruto - imposto();
    }
}
class Program
    {
        static void Main(string[] args)
        {
            funcionario f = new funcionario();
            Console.WriteLine("Digite o nome do funcionário: ");
            f.nome = Console.ReadLine();
            Console.WriteLine("Digite o salário bruto do funcionário: ");
            f.salario_bruto = double.Parse(Console.ReadLine());
            Console.WriteLine("O imposto do funcionário é: " + f.imposto());
            Console.WriteLine("O salário líquido do funcionário é: " + f.salario_liquido());
        }
    }
}