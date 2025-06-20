#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);

int main(){
    fastio;

    ll n, k, h; 
    cin >> n >> k;
    vector<ll> fence;

    ll i;
    for (i = 0; i < n; i++) {
        cin >> h;
        fence.push_back(h);
    }

    ll sum = 0;
    ll best = 0;
    ll j = 1;

    for (i = 0; i < k; ++i) {
        best += fence[i];
        sum += fence[i];
    }

    for (i = 1; i < n - k+1; ++i) {
        sum  = sum - fence[i-1] + fence[i + k-1];
        if (sum < best) {
            best = sum;
            j = i+1;
        }
    }

    cout << j << endl;

return 0;
}