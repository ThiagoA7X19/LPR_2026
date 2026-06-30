#include <iostream>
#include <list>

using namespace std;

int main(){
list <int> notas;
int valor;
int i = 0;
int limite = 5;

while(i < limite){
    cout << "Digite uma nota, max(5)";
    cin >> valor;

    notas.push_back(valor);
    i++;

}
cout << "\nLista:\n";
for(int n: notas){
    cout << n << " ";
}  
    int soma = 0;
    int media = 0;

    for (int n : notas){
        soma += n;
    }
    media = soma/5;
    cout << "\nmedia das notas = " << media;

    int maior_nota = notas.front();
    int menor_nota = notas.front();

    for( int n : notas){
        if (n > maior_nota){
            maior_nota = n;
        }
         if (n < menor_nota){
            menor_nota = n;
        }
    }

    cout << "\nMaior nota: \n" << maior_nota << endl;
    cout << "\nMenor nota: \n" << menor_nota << endl;

return 0;


}