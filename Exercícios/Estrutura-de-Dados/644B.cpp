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

struct process {
    int start_time;
    int duration;
};


int main () {
    fastio;
    ll n, b;
    cin >> n >> b;

    list<process> processes(n);
    list<process>::iterator it;

    for (process &i : processes) {
        cin >> i.start_time;
        cin >> i.duration;
    }
    ll cur_time = 2;
    stack<process> fila;

    it = processes.begin();
    while (!processes.empty())
    {
        process p = processes.front();
        processes.pop_front();

        if (fila.empty()) {
            fila.push(p);
        }
    }
    

return 0;
}