#include <iostream>
using namespace std;

int ataqueMacacos(int T, int N);

int main() {
    int A, B;
    cin >> A >> B;
    int resultado = ataqueMacacos(A, B);
    if(resultado > 0){
      cout << "O BAD venceu!";
    } else {
      cout << "Macacos venceram!";
    }
    return 0;
}


int ataqueMacacos(int T, int N) {
    int BAD = 28000;
    int X = 0;

    for (int i = 1; i <= N; i++) {
        int ataquetot;
        cin >> ataquetot;
        X += ataquetot;
    }
    X = X * T;
    return BAD - X;
}
