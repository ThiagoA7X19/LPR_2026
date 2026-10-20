namespace exercicio1
{
    public class Retangulo
    {
        public double altura;
        public double largura;

         public Retangulo(double altura, double largura){
            this.altura = altura;
            this.largura = largura;
            }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Retangulo retangulo = new Retangulo(10, 5);
            Console.WriteLine("Altura: " + retangulo.altura);
            Console.WriteLine("Largura: " + retangulo.largura);

        }
    }
}