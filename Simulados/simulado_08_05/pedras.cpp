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
    vl chutes = {}, erros, comp = {}, v_temp = {};
    ll n, i, val, j, k, tam = 0, tam_temp = 0, temp1, temp2;
    cin >> n;
    ll n_tam = n;
    for(i = 0; i < n; i++){
        cin >> val;
        auto iterador = std::find(chutes.begin(), chutes.end(), val);
        if(iterador != chutes.end()){
            n_tam--;
        }
        else{
            chutes.push_back(val);
        }
    }
    cin >> val;
    for(j = 0; j < n; j++){
        temp1 = val + chutes[j];
        comp.push_back(temp1);
        tam++;
        temp1 = abs(val - chutes[j]);
        comp.push_back(temp1);
        tam++;

    }


    for(i = 1; i < n; i++){
        cin >> val;
        for(j = 0; j < n_tam; j++){
            temp1 = val + chutes[j];
            temp2 = abs(val - chutes[j]);
            for(k = 0; k < tam; k++){
                if(temp1 == comp[k]){
                    v_temp.push_back(temp1);
                    tam_temp++;
                }
                else{
                    if(temp2 == comp[k]){
                        v_temp.push_back(temp2);
                        tam_temp++;
                    }
                }
            }
        }
        comp = v_temp;
        v_temp = {};
        tam = tam_temp;
        tam_temp = 0;

    }
    sort(comp.begin(), comp.end());

    for(i = 0; i < tam; i++){
        pl(comp[i]);
    }

    return 0;
}