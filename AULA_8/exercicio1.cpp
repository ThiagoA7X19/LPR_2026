# include <iostream>
#include <array>

using namespace std;

struct filme {
    string titulo;
    string diretor;
    int anolancamento;
    int duracaom;
};

int main(){
     array<filme, 3> filmes;
    cout << "Digite o titulo, diretor, ano de lancamento e duracao em minutos de 3 filmes: " << endl;
     
    cin >> filmes[0].titulo >> filmes[0].diretor >> filmes[0].anolancamento >> filmes[0].duracaom;
    cin >> filmes[1].titulo >> filmes[1].diretor >> filmes[1].anolancamento >> filmes[1].duracaom;
    cin >> filmes[2].titulo >> filmes[2].diretor >> filmes[2].anolancamento >> filmes[2].duracaom;

    
    for (int filmescadastrados = 0; filmescadastrados < 3; filmescadastrados++){
        cout << "os filmes cadastrados sao: " << filmes[filmescadastrados].titulo << endl;
    }

    if (filmes[0].anolancamento < filmes[1].anolancamento && filmes[0].anolancamento < filmes[2].anolancamento){
        cout << "o filme mais antigo e: " << filmes[0].titulo << endl;
    }
    else if (filmes[1].anolancamento < filmes[0].anolancamento && filmes[1].anolancamento < filmes[2].anolancamento){
        cout << "o filme mais antigo e: " << filmes[1].titulo << endl;
    }
    else {
        cout << "o filme mais antigo e: " << filmes[2].titulo << endl;

    }
}

     


  
  
