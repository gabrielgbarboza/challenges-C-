#include <iostream>
using namespace std;

int main() {
  int p, r, a, b, c;
  
  cin >> p >> r;

  if((p == 1) && (r == 0))
  {
  cout << 'B';
  } else if((p == 1) && (r == 1)) {
    cout << 'A';
  } else if(p == 0){
    cout << 'C';
  }
  
  return 0;
}