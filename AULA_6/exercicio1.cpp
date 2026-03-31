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

}