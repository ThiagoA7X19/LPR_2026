#include <iostream>
using namespace std;

int revertnum(int n) {
    int numinvertido = 0;
    while (n != 0) {
        int digito = n % 10;
        numinvertido = numinvertido * 10 + digito;
        n /= 10;
    }
    return numinvertido;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    int numeroInvertido = revertnum(numero);
    cout << "Número invertido: " << numeroInvertido << endl;

    return 0;   

}