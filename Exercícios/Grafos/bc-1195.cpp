//ACCEPTED - MURILO
//Arvore binária de busca - bc-1195 (Dificuldade: 5)


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

struct no{
    int data;
    no* esq;
    no* dir;

    no(int num) : data(num), esq(nullptr), dir(nullptr) {}
};

no* insere (no* raiz, int num){
    if(!raiz)
        return new no(num);

    if(num < raiz->data)
        raiz->esq = insere(raiz->esq, num);
    else if(num > raiz->data)
        raiz->dir = insere(raiz->dir, num);

    return raiz;
}

void preorder(no* raiz){
    if(!raiz)
        return;

    cout<<" ";
    cout << raiz->data;
    preorder(raiz->esq);
    preorder(raiz->dir);
}

void inorder(no* raiz){
    if(!raiz)
        return;

    inorder(raiz->esq);
    cout<<" ";
    cout << raiz->data;
    inorder(raiz->dir);
}

void posorder(no* raiz){
    if(!raiz)
        return;

    posorder(raiz->esq);
    posorder(raiz->dir);
    cout<<" ";
    cout << raiz->data;
}

int main(){
    fastio;
    int n, i, num;
    cin >> i;

    for (int j=0; j<i;j++){
        cin >> n;
        no* raiz = nullptr;
        for (int k=0; k<n; k++){
            cin >> num;
            raiz = insere(raiz, num);
        }
        cout<< "Case " << j+1 << ":\n";
        cout << "Pre.:";
        preorder(raiz);
        cout << "\nIn..:";
        inorder(raiz);
        cout << "\nPost:";
        posorder(raiz);
        cout << "\n\n";
    }
    return 0;
}