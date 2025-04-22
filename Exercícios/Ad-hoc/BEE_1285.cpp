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

int main() {
    int N, M;

    while(true) {
        if(!(cin >> N >> M))
            break;

        int count = 0;

        for (int num = N; num <= M; num++) {
            unordered_set<int> digits; // verificar duplicatas
            int temp = num;
            bool has_duplicate = false;

            // Extrai e verifica cada dígito
            while (temp > 0) {
                int digit = temp % 10;
                if (digits.find(digit) != digits.end()) {
                    has_duplicate = true;
                    break;
                }
                digits.insert(digit);
                temp /= 10;
            }

            // Se não houver dígitos repetidos, incrementa o contador
            if (!has_duplicate) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}