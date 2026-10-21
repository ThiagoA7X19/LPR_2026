namespace exercicio1
{
    public class Retangulo
    {
        public double altura;
        public double largura;

    public double area()
        {
            double p = altura * largura;
            return p;
            
        }
        public double perimetro()
        {
            double p = 2 * (altura + largura);
            return p;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Retangulo r = new Retangulo();
            Console.WriteLine("Digite a altura do retângulo: ");
            r.altura = double.Parse(Console.ReadLine());
            Console.WriteLine("Digite a largura do retângulo: ");
            r.largura = double.Parse(Console.ReadLine());
            Console.WriteLine("A área do retângulo é: " + r.area());
            Console.WriteLine("O perímetro do retângulo é: " + r.perimetro());
        }
    }
}