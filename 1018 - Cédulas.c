#include <stdio.h>

int main(void) {
  int num;
  
  printf("");
  scanf("%d", &num);

  for(int i = 100; i > 0; i/=2){
    if(i == 25) i = 20;
    
    printf("%d notas de R$ %d,00\n", num/i, i);
    num %= i;
    }
    
  return 0;
}