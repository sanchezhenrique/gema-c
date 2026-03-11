#include <bits/stdc++.h>
using namespace std;

int main(){
  /* i*k dolares pela i-ésima banana (PA)
  k: Custo da 1° banana
  n: dinheiro inicial
  w: quantidade de bananas desejadas
  total: total do custo
  emprestimo: quantidade de dinheiro que falta
  */

  int k, n, w, emprestimo, total;
  cin >> k >> n >> w;
  total = (k + (k*w)) * w / 2; // Soma de PA;
  if(n >= total){
    cout << "0";
  }
  else {
    emprestimo = total - n;
    cout << emprestimo;
  }
}
