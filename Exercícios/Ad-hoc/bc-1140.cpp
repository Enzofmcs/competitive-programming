//ACCEPTED - MURILO
//BC-1140 (1140 - Flores Florescem da França)


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
    
    string frase;

    while(getline(cin, frase)){//getline le a linha toda e salva em frase

        if(frase=="*"){
            break;
        }

        stringstream ss(frase);//stringstream para separar as palavras
        string palavra;
        char inicial = '\0';//a primeira de comparacao para ser nula
        bool primeiro=true;//ve se é a primeira palavra a comparar
        bool igual=true;//é verdade ate o contrario


        while(ss >> palavra){//lendo cada palavra da stringstream
            char c = tolower(palavra[0]);//tudo para minusculo
            if(primeiro){//se for a primeira palavra
                inicial=c;//define a primeira letra da comparacao
                primeiro=false;//nao eh mais a primeira palavra
            }else if(c!=inicial){//se nao for igual a primeira nao é verdadeiro
                igual=false;
            }
        }
        //da cout se igual for true ou falso
        cout << (igual ? 'Y' : 'N') << "\n";
    }
    return 0;
}