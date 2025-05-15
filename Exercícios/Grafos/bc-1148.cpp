//ACCEPTED - MURILO
//BC-1148 (1148 - Países em Guerra)


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

const int INF = 1e9;



//retorna par(distancia, pais)
pair<vector<int>, vector<int>> dijkstra(
    const vector<vector<int>>& grafo,
    int origem,
    int destino
) {
    int n = grafo.size();
    vector<int> dist(n, INF), pai(n, -1);
    vector<bool> visitado(n, false);
    dist[origem] = 0;

    for (int i = 0; i < n; ++i) {
        int u = -1;
        // escolhe vértice não visitado de menor distância
        for (int j = 0; j < n; ++j) {
            if (!visitado[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }
        if (u == -1 || dist[u] == INF) break;
        if (u == destino) break;
        visitado[u] = true;

        //relaxa as arestas
        for (int v = 0; v < n; ++v) {
            int w = grafo[u][v];
            if (w >= 0 && !visitado[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pai[v] = u;
            }
        }
    }
    return {dist, pai};
}

int main() {
    fastio;


    int N, E;
    //processa ate 00
    while (cin >> N >> E && (N || E)) {
        //-1 = nao tem aresta
        vector<vector<int>> grafo(N, vector<int>(N, -1));

        //leitura das arestas
        for (int i = 0; i < E; ++i) {
            int X, Y, H;
            cin >> X >> Y >> H;
            --X; --Y;  // converte de 1-based para 0-based
            grafo[X][Y] = H;
            //se y x ja existia os dois pesos viram 0
            if (grafo[Y][X] != -1) {
                grafo[X][Y] = 0;
                grafo[Y][X] = 0;
            }
        }

        int K;
        cin >> K;
        //cada consulta é dijkstra para saber o resultado
        while (K--) {
            int O, D;
            cin >> O >> D;
            --O; --D;
            auto res = dijkstra(grafo, O, D);
            int distancia = res.first[D];
            if (distancia == INF) {
                cout << "Nao e possivel entregar a carta\n";
            } else {
                cout << distancia << "\n";
            }
        }


        cout << "\n";
    }

    return 0;
}