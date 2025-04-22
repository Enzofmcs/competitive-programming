//ACCEPTED - MURILO
//Intervalo (Beginner 1037)

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

int mpow(int base, int exp) {
    base %= mod;
    int result = 1;
    while (exp > 0) {
      if (exp & 1) result = ((ll)result * base) % mod;
      base = ((ll)base * base) % mod;
      exp >>= 1;
    }
    return result;
  }


int main(){
    fastio;
    float n;

    cin>>n;

    if(n>=0 && n<=25){
        cout<<"Intervalo [0,25]\n";
    }else if(n>25 && n<=50){
        cout<<"Intervalo (25,50]\n";
    }else if(n>50 && n<=75){
        cout<<"Intervalo (50,75]\n";
    }else if(n>75 && n<=100){
        cout<<"Intervalo (75,100]\n";
    }else{
        cout<<"Fora de intervalo\n";
    }



    return 0;
}