// ENZO - dificuldade 6

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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

bool isitprime(unsigned ll n){
    if(n <= 1){
        return false;
    }

    for(unsigned ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    unsigned ll i, N, x;

    si(N);

    fo(i, N){
        si(x);
        if(isitprime(x)){
            pl("Prime");
        }
        else{
            pl("Not Prime");
        }



    }


    return 0;
}