#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;

    cout <<"Digite A: ";
    cin >> A; 
    cout <<"Digite B: ";
    cin >> B; 
    cout <<"Digite C: ";
    cin >> C; 
    cout <<"Digite D: ";
    cin >> D; 

    int AB = A * B;
    int CD = C * D;

    int produto = AB * CD;
    int diferenca = AB - CD;
    cout <<"produto: " <<produto<<endl; 
    cout <<"diferenca: " <<diferenca<<endl;

    return 0;

}