#include <iostream>
using namespace std;
int main(){
    int matrizA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrizA[i][j] << " ";
        }        cout << endl;
        int multiplicacao = 0;
        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                multiplicacao += matrizA[i][j] * matrizB[i][j];
            }
        }
        cout << "A soma dos elementos da matriz e: " << multiplicacao << endl;
    }

