#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  int multiplode7 = N % 7;
  
  if (multiplode7 == 0) {
    cout << "É MULTIPLO DE 7" << endl;
    } else{ 
      cout << "ESSE NÃO É" << endl;

    }
  return 0;
}