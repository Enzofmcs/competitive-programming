// ACCEPTED - ENZO
// Divisão da Nlogônia - 1

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
    ll n, X, Y, x, y, i;
    n = 1;
    while(0==0){
        cin >> n;
        if(n == 0){
            return 0;
        }
        cin >> X >> Y;
        fo(i, n){
            cin >> x >> y;
            if(x == X || y == Y){
                pl("divisa");
                
            }           
            else{
                if(x > X){
                if(y > Y){
                    pl("NE");
                }
                else{
                    pl("SE");
                }
            }
            else {
                if(y > Y){
                    pl("NO");
                }
                else{
                    pl("SO");
                }
            }
        }
        }



    }


    return 0;
}