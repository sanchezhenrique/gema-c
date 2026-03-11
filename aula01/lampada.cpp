#include <bits/stdc++.h>
using namespace std;

int main(){
  /*
  ENTRADA: iA iB fA fB
  SAIDA: QUANTIDADE DE INTERRUPTORES PRESSIONADOS
  C1 ALTERA ESTADO DE A
  C2 ALTERA ESTADO DE A E B
  */
 int iA, iB, fA, fB, contagem;
 cin >> iA >> iB >> fA >> fB;
  if(iB == fB && iA !=fA){
    cout << "1"; //C1
  }
  if(iB == fB && iA == fA){
    cout << "0"; //IGUAL
  }
  if(iB != fB && iA != fA){
    cout << "1"; // C2
  }
  if(iB != fB && iA == fA ){
    cout << "2"; //C2 E C1
  }
}


