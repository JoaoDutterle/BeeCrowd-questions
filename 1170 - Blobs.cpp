#include <iostream>

using namespace std;

int main() {
  int N, dias;
  float C;

  cin >> N;
  
  for (int i = 0; i < N; i++) {
    cin >> C;
    dias = 0;
    while(C > 1){
      C /= 2;
      dias ++;
    }
    cout << dias << " dias\n";
  }
  
  return 0;
}