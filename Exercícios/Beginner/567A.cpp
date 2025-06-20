#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);

int main(){
    fastio;

    ll n, coordinate;
    vector<ll> cities;
    vector<ll>::iterator it, min, max;
    cin >> n;

    for (ll i = 0; i < n; ++i) {
        cin >> coordinate;
        cities.push_back(coordinate);
    }

    ll min_result, max_result;
    for (it = cities.begin(); it != cities.end(); ++it) {
        //Definição dos vizinhos do atual
        auto left = it - 1;
        auto right = it + 1;
        //Definição dos valores que serão mínimos e máximos para a comparação
        //entre o valor atual
        if (abs(*it - *(cities.begin())) < abs(*it - *(cities.end() - 1))) {
            max = cities.end() - 1;
            min = cities.begin();
        } else {
            max = cities.begin();
            min = cities.end() - 1;
        }
        // Definições de Begin
        if (it == cities.begin()) {
            min_result = abs(*(it + 1) - *it);
            max_result = abs(*(cities.end()-1) - *it);
        }
        // Definição de End
        else if (it == (cities.end() - 1)) {
            min_result = abs(*it - *(it-1));
            max_result = abs(*(cities.begin()) - *it);
        }
        //Casos intermediários
        else {
            abs(*it - *left) < abs(*it - *right) ?
            min_result = abs(*it - *left) :
            min_result = abs(*it - *right);

            max_result = abs(*it - *max);
        }
        cout << min_result << " " << max_result << endl;
    }
return 0;
}