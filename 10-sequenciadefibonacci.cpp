#include <iostream>
using namespace std;

int main()
{
    int c, anterior, atual, soma;

    anterior = 0;
    cout << anterior;
    atual = 1;
    cout << atual;

    for (c = 3; c < 16; c++) {
        soma = anterior + atual;
        cout << soma << " ";
        anterior = atual;
        atual = soma;
    }
    
    return 0;
}