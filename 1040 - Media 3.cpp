#include <iostream>

int main() {
  float notas[4], media, ex;
 
  for(int i = 0; i < 4; i++){
    printf("");
    scanf("%f", &notas[i]);
  }

  media = (notas[0]*2 + notas[1]*3 + notas[2]*4 + notas[3])/10;

  printf("Media: %.1f\n", media);
  if(media >= 7.0){
    printf("Aluno aprovado.\n");
  }else if(media < 5){
    printf("Aluno reprovado.\n");
  }else if(media >= 5 && media < 7){
    printf("Aluno em exame.\n");
    scanf("%f", &ex);
    printf("Nota do exame: %.1f\n", ex);
    
    media = (media+ex)/2;
    
    if(media >= 5){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", media);
    }else if(media < 5){
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", media);
    }
  }
  
}