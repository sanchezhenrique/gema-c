#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    double valor;
    int percentual;
    double reajuste;
    double valorNovo;
    cin >> valor;
    
    if(valor>= 400 && valor<=400){
        percentual= 15;
    }
    else if(valor>=400.01 && valor<=800){
        percentual = 12;
    }
    else if(valor>=800.01 && valor<=1200){
        percentual = 10;
    }
    else if(valor>=1200.01 && valor<=2000){
        percentual = 7;
    }
    else{
        percentual = 4;
    }
    
    reajuste = valor * percentual *0.01;
    valorNovo = valor + reajuste;
    cout << fixed << setprecision(2) << "Novo salario: " <<  valorNovo << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

}