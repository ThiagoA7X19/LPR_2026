#include <iostream>
#include <array>
using namespace std;

struct livro {
    string titulo;
    string autor;
    int anoPublicacao;
    int numPaginas;
    double preco;
};

int main(){
    array<livro, 3> livros;
    cout << "digite o titulo do livro 1, seu autor, ano de publicacao, numero de paginas e preco: " << endl;
    cin >> livros[0].titulo >> livros[0].autor >> livros[0].anoPublicacao >> livros[0].numPaginas >> livros[0].preco;
    cout << "digite o titulo do livro 2, seu autor, ano de publicacao, numero de paginas e preco: " << endl;
    cin >> livros[1].titulo >> livros[1].autor >> livros[1].anoPublicacao >> livros[1].numPaginas >> livros[1].preco;
    cout << "digite o titulo do livro 3, seu autor, ano de publicacao, numero de paginas e preco: " << endl;
    cin >> livros[2].titulo >> livros[2].autor >> livros[2].anoPublicacao >> livros[2].numPaginas >> livros[2].preco;

    for (int i = 0; i < 3; i++){
        cout << "o valor total do livro é: " << livros[i].preco * livros[i].numPaginas << endl;
    }

    double media = (livros[0].numPaginas + livros[1].numPaginas + livros[2].numPaginas) / 3;
    cout << "a media do numero de paginas dos livros é: " << media << endl;
}