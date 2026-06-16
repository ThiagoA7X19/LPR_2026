#include <iostream>
#include <array>
using namespace std;

struct Produto {
    string nome;
    string codigo;
    double preco;
    int quantidade;
};

int main(){
    array<Produto, 3> produtos;
    cout << "digite o nome do produto 1, seu codigo, preco e quantidade: " << endl;
    cin >> produtos[0].nome >> produtos[0].codigo >> produtos[0].preco >> produtos[0].quantidade;
    cout << "digite o nome do produto 2, seu codigo, preco e quantidade: " << endl;
    cin >> produtos[1].nome >> produtos[1].codigo >> produtos[1].preco >> produtos[1].quantidade;
    cout << "digite o nome do produto 3, seu codigo, preco e quantidade: " << endl;
    cin >> produtos[2].nome >> produtos[2].codigo >> produtos[2].preco >> produtos[2].quantidade;
   

    for (double valorTotal = 0; valorTotal < 3; valorTotal++){
        cout << "o valor total do produto é: " << produtos[valorTotal].preco * produtos[valorTotal].quantidade << endl;
    }
}