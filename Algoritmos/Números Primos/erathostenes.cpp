// ENZO - ALGORITMO DE NUMEROS PRIMOS

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

vector<bool> erathostenes(unsigned ll n){
    if(n < 2){
        return {};
    }
    vector<bool> bo (n, 1);
    bo[0] = bo[1] = false;
    unsigned ll i, j;
    float sqr = sqrt(n);
    for(i = 2; i < sqr; i++){
        if(bo[i] == true){
            j = i*i;
            while(j <= n){
                bo[j-1] = false;
                j += i;
            }
        }
    }
    bo[0] = false;
    return bo;
}


int main(){
    unsigned ll n = 100000;
    ll i;
    vector<bool> prime = erathostenes(n);

    for(i = 0; i< n; i++){
        cout << prime[i] << ", ";
        }


    return 0;
}