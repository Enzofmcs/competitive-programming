#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);
#define fo(i,n) for(i=0;i<n;i++)
#define si(x)	cin >> x
#define pi(x)   cout << x
#define pl(x)   cout << x << "\n"
#define all(x)  x.begin(), x.end()
#define PI 3.1415926535897932384626

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl; 
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    double notas[] = {100.0,50.0,20.0,10.0,5.0,2.0,1.0,0.5,0.25,0.10,0.05,0.01};
    int qtd_notas[12] = {0};
    double valor;

    cin >> valor;

    valor = round(valor * 100)/100; // Arredonda para o inteiro mais próximo - útil para conversões monetárias


    for (int i = 0; i < 12; i++) {
        qtd_notas[i] = static_cast<int>(valor / notas[i]); // Converte um valor de um tipo para o outro, desde que a conversão seja válida

        valor = valor - (qtd_notas[i]*notas[i]);

        valor = round(valor * 100)/100;
    }

    cout << "NOTAS:\n";
    for (int i = 0; i < 6; i++) {
        cout << qtd_notas[i] << " nota(s) de R$ "
             << fixed << setprecision(2) 
             << notas[i] << "\n";
    }
    cout << "MOEDAS:\n";
    for (int i = 6; i < 12; i++) {
        cout << qtd_notas[i] << " moeda(s) de R$ "
        << fixed << setprecision(2) 
        << notas[i] << "\n";  
    }

}