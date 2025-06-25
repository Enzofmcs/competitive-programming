#include <bits/stdc++.h>
#include <cmath>
#include <bitset>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl; 

int main () {
    size_t n, m;
    int k, result = 0;
    cin >> n >> m >> k;

    vector<ll> x(m);
    for (ll &v : x) cin >> v;

    ll fedor;
    cin >> fedor;
    
    for (ll army : x) {
        ll dif = fedor ^ army;
        if (__builtin_popcountll(dif) <= k) {
            result++;
        }
    }

    cout << result << endl;
    
return 0;
}