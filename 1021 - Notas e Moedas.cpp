#include <iostream>
#include <string>
#include <math.h>

int main() {
  float valor, aux;

  std::cout << "";
  std::cin >> valor;
  aux = valor;
  
  std:: cout << "NOTAS:\n";
  for(int i = 100; i > 0; i/=2){
    if(i == 25){
      i = 20;
    }
    std::cout << valor/i << " nota(s) de " << i << ".00" << "\n";
    valor = fmod(valor, i);
  }
  
  std::cout << "MOEDAS\n";
  valor = aux;
  
  for(int i = 100; i > 0; i/=2){
    if(i == 12){
      i = 10;
    }else if(i == 2){
      i = 1;
    }
    std::cout << (valor/i)/10 << " moeda(s) de " << i << "\n";
    valor = fmod(valor, i);
  }
  
  system("pause");

}