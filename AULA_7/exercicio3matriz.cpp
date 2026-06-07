#include <iostream>
using namespace std;

int matriz[4][4] = {
    {0, 524, 521, 882},
    {524, 0, 434, 586},
    {521, 434, 0, 429},
    {882, 586, 429, 0}
};

int calcularDistancia(string cidade1, string cidade2)
{
    int indice1, indice2;

    if (cidade1 == "A")
        indice1 = 0;
    else if (cidade1 == "B")
        indice1 = 1;
    else if (cidade1 == "C")
        indice1 = 2;
    else if (cidade1 == "D")
        indice1 = 3;
    else
    {
        cout << "Cidade inválida!" << endl;
        return -1;
    }

    if (cidade2 == "A")
        indice2 = 0;
    else if (cidade2 == "B")
        indice2 = 1;
    else if (cidade2 == "C")
        indice2 = 2;
    else if (cidade2 == "D")
        indice2 = 3;
    else
    {
        cout << "Cidade inválida!" << endl;
        return -1;
    }

    return matriz[indice1][indice2];
}

int main()
{
    string cidade1, cidade2;

    cout << "Digite o nome de duas cidades (A, B, C ou D): ";
    cin >> cidade1 >> cidade2;

    int distancia = calcularDistancia(cidade1, cidade2);

    if (distancia != -1)
    {
        cout << "A distancia entre "
             << cidade1 << " e "
             << cidade2 << " é "
             << distancia << " km." << endl;
    }

    return 0;
}