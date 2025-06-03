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

    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int res = 0;
    string ans;

    for (int i = 0; i < n-1; ++i) {
        int cur = 0;
        for (int j = 0; j < n-1; ++j) {
            if (s[i] == s[j] && s[i+1] == s[j+1]) {
                ++cur;
            }
            if (cur > res) {
                res = cur;
                ans = string(1, s[i]) + string(1, s[i+1]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}