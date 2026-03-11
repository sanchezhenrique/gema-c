#include <bits/stdc++.h>
using namespace std;

int main(){
  int p1; //esquerda
  int p2; //direita
  int c1;
  int c2;
  cin >> p1 >> c1 >> p2 >> c2;
  if(p1*c1 > p2*c2){ // des para esquerda
    cout << "-1" ;
  }
  else if(p1*c1 < p2*c2) { // des para direita
    cout << "1";
  }
  else{ // equilibrio
    cout << "0";
  }

}