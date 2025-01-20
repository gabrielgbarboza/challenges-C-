#include <iostream>
using namespace std;

int main() {
  char zagueiro;
  char goleiro;
  char drible;
  char chute;
  char direcao1;
  char direcao2;
  char direcao3;
  char direcao4;
  
  cin >> direcao1 >> direcao2;
  zagueiro = direcao1;
  goleiro = direcao2;
  
  cin >> direcao3 >> direcao4;
  drible = direcao3;
  chute = direcao4;

  if (direcao1 != direcao3) {
    cout << "Driblado" << endl;
  } else {
    cout << "Bloqueado" << endl;
  }

  if ((direcao2 != direcao4) && (direcao1 != direcao3)) {
    cout << "Gol" << endl;
  } 
  if ((direcao2 == direcao4) && (direcao1 != direcao3)) {
    cout << "...e o goleiro pega" << endl;
  }

  return 0;
}