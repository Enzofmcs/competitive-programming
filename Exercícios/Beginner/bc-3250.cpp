//ACCEPTED  MURILO 
//Problema no Elevador - BC 3250 (BFS(BUSCA EM LARGURA))
// https://www.urionlinejudge.com.br/judge/pt/problems/view/3250


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

int mpow(int base, int exp) {
    base %= mod;
    int result = 1;
    while (exp > 0) {
      if (exp & 1) result = ((ll)result * base) % mod;
      base = ((ll)base * base) % mod;
      exp >>= 1;
    }
    return result;
  }


int main(){
    fastio;
    int f, s, g, u, d;

    cin >> f >> s >> g >> u >> d; //f=andares, s=andar atual, g=andar desejado, u=cima, d=baixo

    vector<int> dist(f+1, -1);
    queue<int> q;

    dist[s]=0;
    q.push(s);

    while(!q.empty()){
        int atual=q.front();
        q.pop();

        if(atual==g){
            break; //ta no andar desejado
        }

        //tentar subir
        if(u>0){
            int cima=atual+u;
            if(cima<=f && dist[cima]==-1){ //verifica pela distancia se ja foi visitado
                dist[cima]=dist[atual]+1;
                q.push(cima);
            }
        }

        //tentar descer
        if(d>0){
            int baixo=atual-d;
            if(baixo>0 && dist[baixo]==-1){ //verifica pela distancia se ja foi visitado
                dist[baixo]=dist[atual]+1;
                q.push(baixo);
            }
        }

    }

    if(dist[g] != -1){
        cout << dist[g] << "\n";
    }else{
        cout << "use the stairs\n";
    }

    return 0;
}