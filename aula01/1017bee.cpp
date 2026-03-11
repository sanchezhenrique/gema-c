#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int horas;
    int velocidade;
    float distancia;
    float litros;
    
    cin >> horas;
    cin >> velocidade;
    distancia = velocidade * horas;
    litros = distancia / 12;
    
    cout << fixed << setprecision(3) << litros << endl;
    
 
    return 0;
}