#include <bits/stdc++.h>

using namespace std;

int main() {
  int num, qtd, i, j, aux, cont;
  vector <int> meuVector;

  cin >> qtd;
  
  for (i = 0; i < qtd; i++) {
    cin >> num;
    meuVector.push_back(num);
  }

  sort(meuVector.begin(), meuVector.end());

  for(i = 0; i<qtd; i++){
    if(meuVector[i] == 0){
      continue;
    }
    aux = meuVector[i];
    cont = 1;
    meuVector[i] = NULL;
    for(j = i; j<qtd; j++){
      if(aux == meuVector[j]){
        cont++;
        meuVector[j] = 0;
      }
    }
    cout << aux << " aparece " << cont << " vez(es)" << endl; 
  }
  
}
