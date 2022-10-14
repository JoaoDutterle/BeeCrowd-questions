#include <iostream>

using namespace std;

int main() {
  int qtd, x, i, contM = 0, contJ = 0;

  while(qtd != 0){
    
    cin >> qtd;

    srand(time(NULL));
    for(i = 0; i < qtd; i++){
      cin >> x;
      if(x == 0){
        contM++;
      }else{
        contJ++;
      }
    }
    if(qtd != 0){
    printf("Mary won %d times and John won %d times\n", contM, contJ);
    contJ = 0;
    contM = 0;
    }
  }
}