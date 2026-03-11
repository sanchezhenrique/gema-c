//https://codeforces.com/contest/1669/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned int t;
  cin >> t;
  for(t; t>0; t--){
    int rating;
    cin >> rating;
    if (rating >= 1900){
      cout << "Division 1" << endl;
    }
    else if(rating >= 1600 && rating <= 1899){
      cout << "Division 2" << endl;
    }
    else if(rating >= 1400 && rating <= 1599){
      cout << "Division 3" << endl;
    }
    else{
      cout << "Division 4" << endl;
    }
  }
}