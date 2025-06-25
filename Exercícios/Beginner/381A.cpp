#include <bits/stdc++.h>

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

int main() {
    fastio;

    int n, sereja_sum = 0, dima_sum = 0;

    cin >> n;

    deque<int> cards(n);
    for(int &card : cards) cin >> card;

    int i = 0;
    while (cards.size() > 0) {
        if (i%2 == 0) {
            if (*cards.begin() > *(cards.end()-1)) {
                sereja_sum += cards.front();
                cards.pop_front();
            } else {
                sereja_sum += cards.back();
                cards.pop_back();                
            }
            ++i;
        } else {
            if (*cards.begin() > *(cards.end()-1)) {
                dima_sum += cards.front();
                cards.pop_front();
            } else {
                dima_sum += cards.back();
                cards.pop_back();                
            }
            ++i;           
        }
    }

    cout << sereja_sum << " " << dima_sum << endl;

    return 0;
}