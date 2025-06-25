#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);

int main () {
    fastio;
    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> a(n);
        for (int &i : a) cin >> i;

        int cont = 1;
        int sequence = 0;
        for(int i = 0; i < n-1; ++i) {
            if (a[i] + 1 < a[i+1]) {
                ++cont;
            } else {
                ++sequence;
                if (sequence >= 2 && a[i] != a[i+1]) {
                    ++cont;
                    sequence = 0;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}
