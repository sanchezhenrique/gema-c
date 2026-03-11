#include <bits/stdc++.h>
using namespace std;

int main (){
  long long int n, saida;
  cin >> n;
  if(n % 2 == 0){
    saida = n / 2;
    cout << saida;
  }
  else{
    saida = -(n+1) / 2;
    cout << saida;
  }
}