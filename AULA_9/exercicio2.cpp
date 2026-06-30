#include <iostream>
#include <list>

using namespace std;

int main(){
    list <string> nomes;
    string valor = 0;
    int limite = 0;

    cout << "Digite quantos nomes que irão estar na lista";
    cin >> limite;
    for(int i; i < limite; i++){
        cout << "Digite o nome" << i + 1 << ": ";
        cin >> valor;
        nomes.push_back(valor);
    }

}