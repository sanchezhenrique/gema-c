#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned int t;
  cin >> t;
  for(unsigned int i = 0; i < t; i++){
    unsigned int a, b;
    int c;
    cin >> a >> b >> c;
    if(a + b == c){
      cout << "+" << endl;
    }
    else{
      cout << "-" << endl;
    }
  }
}