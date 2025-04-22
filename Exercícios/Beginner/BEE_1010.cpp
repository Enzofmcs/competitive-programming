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

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

typedef struct Product
{
    int code;
    int amount;
    float unit_price;
} product;


int main() {
    fastio;
    product product1;
    product product2;

    cin >> product1.code >> product1.amount >> product1.unit_price;
    cin >> product2.code >> product2.amount >> product2.unit_price;

    cout << "VALOR A PAGAR: R$ "
         << fixed << setprecision(2) // Difine precisão de duas casas decimais
         << (product1.amount*product1.unit_price) + (product2.amount*product2.unit_price) << "\n";

    return 0;
}