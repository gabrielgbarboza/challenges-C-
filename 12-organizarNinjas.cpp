#include <iostream>
using namespace std;

int guerraNinja(int N, int F); 

int main() {
  int A, B;
  cin >> A;
  guerraNinja(A , B);
  return 0;
  
}

int guerraNinja(int N, int F){
  int FBat = N;
  for(int i = 1; i <= N; i++){
  cin >> F;
  cout << FBat << ':' << ' ' << F << endl;
  FBat = FBat - 1;
  }
}