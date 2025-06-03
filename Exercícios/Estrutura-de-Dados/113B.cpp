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

vector<size_t> find_occurrences(const string& text, const string& pattern) {
    vector<size_t> occurrences;
    size_t pos = text.find(pattern, 0);
    while (pos != string::npos) {
        occurrences.push_back(pos);
        pos = text.find(pattern, pos + 1);
    }
    return occurrences;
}

int main() {
    string t, s_begin, s_end;
    cin >> t >> s_begin >> s_end;

    // Encontra todas as ocorrências de s_begin e s_end
    vector<size_t> begins = find_occurrences(t, s_begin);
    vector<size_t> ends = find_occurrences(t, s_end); 
    
    unordered_set<string> result;

    for (size_t b_pos : begins) {
        for (size_t e_pos : ends) {
            if (e_pos >= b_pos && e_pos + s_end.size() <= t.size()) {
                string sub = t.substr(b_pos, e_pos + s_end.size() - b_pos);
                result.insert(sub);
            }
        }
    }

    cout << result.size() << endl;
    return 0;
}