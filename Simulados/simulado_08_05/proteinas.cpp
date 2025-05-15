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

ll HMS (string N, string M, ll init, ll end) {
    ll soma = 0;

    init--;
    end--;
    ll temp = init;

    for (char c: N) {
        if (c == M[init]) {
            if (init == end) {
              soma++;
              init = temp;
              if(c == M[temp] && temp != end){
                init++;
              }  
            }
            else {
                init++;
            }
        }
        else {
            init = temp;
            if(c == M[temp]){
                init++;
              }  
        }
    }

    return soma;
}

string cut(string str, ll init, ll end) {
    string a= {};
    init--;
    end--;

    for(int i = init; i<= end; i++) {
        a.push_back(str[i]);
    }
    return a;
}

int main() {
    fastio;

    string M;
    string N;

    ll a, b;

    cin >> a >> b;
    cin >> N;
    cin >> M;

    ll Q;
    cin >> Q;
    ll init, end;
    ll tam, soma;
    string subs;
    ll i, j;
    fo(i, Q) {
        soma = 0;
        cin >> init >> end;
        tam = end - init;
        subs = cut(M, init, end);
        for(j = 1; j+tam <= a; j++){
            if(subs == cut(N, j, j+tam)){
                soma++; 
            }
        }
        pl(soma);
    }

    return 0;
}