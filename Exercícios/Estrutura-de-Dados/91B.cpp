#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);
/*
// Resolução simples sem considerações de vazamento de memória
int main () {
    fastio;
    size_t n;
    cin >> n;

    deque<size_t> a(n);

    for (size_t &i : a) cin >> i;


    while (!a.empty())
    {
     ll contentment = -1;
     size_t cur = *a.begin();
     a.pop_front();
    
     for (size_t i = a.size(); i > 0; --i) {
        if (cur > a[i-1]) {
            contentment = i-1;
            break;
        }
     }
     cout << contentment << " ";
    }
    cout << endl;
    
return 0;
}
*/

int MSB(int idx) {
    return idx&-idx;
}

int queryBIT (int pos, vector<int>& bit) {
    int res = 0;
    while (pos > 0) {
        res = max(res, bit[pos]);
        pos =- MSB(pos);
    }
    return res;
}

int main () {
    fastio;

    int n;
    cin >> n;
// ---------- Coordenate Compression ---------- //
    vector<int> a(n);
    set<int> b;
    for(int &i : a) cin >> i;

    for (int i : a) b.insert(i);

    int rank = 0;
    map<int, int> ranks;

    for (int v : b) {
        ranks[v] = ++rank;
    }

    for (int &v : a) {
        v = ranks[v];
    }

    for (int i : a) cout << i << " ";

// ---------- Binary Indexed Tree ---------- //

    vector<int> bit(n + 1, -1);
    int cur;
    for (size_t i = n; i > 0; i--) {
        
    }

    return 0;
}
