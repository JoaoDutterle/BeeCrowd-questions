#include <bits/stdc++.h>

using namespace std;

int main() {
  int size, i, qtd, somaTotal = 0, somaC = 0, somaR = 0, somaS = 0;
  char type;
  scanf("%d", &size);

  for(i = 0; i<size; i++){
    scanf("%d %c", &qtd, &type);
    if(type == 'C'){
      somaC += qtd;
    }else if(type == 'R'){
      somaR += qtd;
    }else if(type == 'S'){
      somaS += qtd;
    }
    somaTotal += qtd;
  }
  
  printf("Total: %d cobaias\n", somaTotal);
  printf("Total de coelhos: %d\n", somaC);
  printf("Total de ratos: %d\n", somaR);
  printf("Total de sapos: %d\n", somaS);
  
  printf("Percentual de coelhos: %.2f %\n", (float)(100*somaC)/somaTotal);
  printf("Percentual de ratos: %.2f %\n", (float)(100*somaR)/somaTotal);
  printf("Percentual de sapos: %.2f %\n", (float)(100*somaS)/somaTotal); 
  

  
}