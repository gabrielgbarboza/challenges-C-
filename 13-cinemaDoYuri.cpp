#include <iostream>
using namespace std;

void cadeirasOcupadas(int N, int P);

int main() {
    int A, B;
    cin >> A;
    cin >> B;

    cadeirasOcupadas(A, B);

    return 0;
}

void cadeirasOcupadas(int N, int P) {
    int assentos[N];
    for(int i = 0; i < N; i++) {
        assentos[i] = i + 1;
    }
    
    int assentosOcupados[P];
    for(int c = 0; c < P; c++) {
        cin >> assentosOcupados[c];
    }
    
    int L = N - P;
    int assentosLivres[L];
    int index = 0;

    for(int f = 0; f < N; f++) {
        bool ocupado = false;
        for(int k = 0; k < P; k++) {
            if(assentos[f] == assentosOcupados[k]) {
                ocupado = true;
                break;
            }
        }
        if(!ocupado) {
            assentosLivres[index] = assentos[f];
            index++;
        }
    }
    for(int j = 0; j < index; j++) {
        cout << assentosLivres[j] << ' ';
    }
}
