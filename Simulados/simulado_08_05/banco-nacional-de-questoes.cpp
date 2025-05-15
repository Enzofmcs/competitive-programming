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

int main() {
    fastio;
    double grafos, programacaoDinamica, geometria, res;
    cin >> grafos >> programacaoDinamica >> geometria;

    char valor;
    cin >> valor;

    switch(valor) {
        case 'A':
            res = grafos + 3*(programacaoDinamica)/2 + 5*(geometria)/2;
        break;
        case 'B':
            res = programacaoDinamica + 2*grafos/3 + 5*(geometria)/3;
        break;
        case 'C':
            res = geometria + 2*(grafos)/5 + 3*(programacaoDinamica)/5;
        break;
    }
    ll res1 = (ll)(res);
    cout << res1 << "\n";

    return 0;
}