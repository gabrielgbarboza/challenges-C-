#include <iostream>
using namespace std;

int main() {
  
  int N =1;
 
  while (N != 0) {
  cin >> N;
  N = N * (-1);
    if (N != 0) {
    cout << N << endl;
    }
  }
  
  return 0;
}