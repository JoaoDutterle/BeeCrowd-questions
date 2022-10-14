#include <iostream> //cin,cout
#include <string>  //string
#include <sstream> //istringstream
#include <cctype>  //isdigit

using namespace std;

int main() {
  string txt;

  while(getline(cin, txt)){
    int tam = txt.size();
    int validas = 0; //contador da soma dos tamanhos das palavras válidas
    int qtd = 0; //contador de palavras válidas
    string palavras;//recebe cada palavra da string
    
    istringstream iss(txt);//iss é usado para conter a frase 
    
    while (getline(iss, palavras, ' ')){//quebra a frase usando ' ' como delimitador e coloca em "palavras"
    bool b = false;//verificador de palavras válidas
    tam = palavras.size();
    int aux = 0;//conta o comprimento da palavra
      
    for(int i=0 ; i<tam ; i++){
      if(isdigit(palavras[i]) || palavras[i] == '.' && i!=tam-1)//palavra inválida
      {
       b = true;//indica que a palavra é inválida
       break;
      }else if(palavras[i] == '.'){
        //caso o ultimo caracter seja '.', não contabilize
      }else{
        aux++; //incrementa o comprimento da palavra
      }
    }
    if(b == false){//se b for false indica que a palavra é válida
    validas += aux;//incrementa o comprimento da palavra atual na soma dos tamanhos das palavras
    qtd++;//incrementa a quantidade de palavras válidas 
      }
        
    }
  int compMedio; 
        (qtd == 0) ? compMedio = 0 : compMedio= validas/qtd;//protege de uma divisão por 0 
        if(compMedio <=3){ 
            cout<<"250"<<endl; 
        }else if(compMedio == 4 || compMedio == 5 ){ 
            cout<<"500"<<endl; 
        }else{ 
            cout<<"1000"<<endl; 
        } 
    
  }
}