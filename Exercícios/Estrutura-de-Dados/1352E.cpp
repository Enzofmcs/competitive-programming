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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int result = 0;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        

        for (int l = 0; l < n - 2; l++) {

            int sum = a[l];

            for (int r = l; r < n - 1; r++) {
                if ( r == l ) {
                    continue;
                }

                sum += a[r];

                if (sum == a[r+1]) {
                    result++;
                    break;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}