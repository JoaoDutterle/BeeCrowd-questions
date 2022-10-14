#include <iostream>

using namespace std;

int main() {
  int horaInicial, minInicial, horaFinal, minFinal, resultado = 0;
  int  aux;
  

  cin >> horaInicial >> minInicial >> horaFinal >> minFinal;

  if(horaInicial >= horaFinal){
    horaInicial *= 60;
    horaInicial += minInicial;
    horaFinal += 24;
    horaFinal *= 60;
    horaFinal += minFinal;
    resultado = horaFinal - horaInicial;

    cout << "O JOGO DUROU " << resultado/60 << " HORA(S) E " << resultado%60 << " MINUTO(S)" << endl;

  }else if(horaInicial < horaFinal){
    resultado = horaFinal - horaInicial;
    if(minFinal < minInicial){
      resultado--;
      aux = minFinal + 60 - minInicial;
    }else{
      aux = minFinal - minInicial;
    }
   
    cout << "O JOGO DUROU " << resultado << " HORA(S) E " << aux << " MINUTO(S)" << endl;
    
  }
}