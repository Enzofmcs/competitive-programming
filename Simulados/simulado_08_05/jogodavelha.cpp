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


int main(){
    fastio;
    
    ll numO=0;
    char vet[3];

    for(int i=0;i<3;i++){
        cin >> vet[i];
        if(vet[i]=='O'){
            numO++;
        }
    }
    if(numO>1 || numO == 0){
        cout << "?\n";
        return 0;
    }else if(vet[0]==vet[1] || vet[1]==vet[2]){
        cout << "Alice\n";
    }else{
        cout << "*\n";
    }

    return 0;

}