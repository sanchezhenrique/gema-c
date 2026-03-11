#include <bits/stdc++.h>
using namespace std;

int main (){
  int x;
  int cont = 0;
  cin >> x;
  for(int i = 2; i < x; i++){
    if(x % i == 0){
      cont++;
    }
  }
  if(cont == 0 && x != 1 && x > 0){
    cout << "Primo!";
  }
  else{
    cout << "Não é primo!";
  }
}