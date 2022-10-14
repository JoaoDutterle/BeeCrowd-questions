#include <iostream>

int main() {
  int num, ano, mes, dias, resto;

  scanf("%d", &num);

  ano = num/365;
  resto = num%365;
  mes = resto/30;
  dias = resto%30;

  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", dias);
  
}