/* 
                       oo0oo 
                      o8888888o 
                      88" . "88 
                      (| -_- |) 
                      0\  =  /0 
                    _/`---'\___ 
                  .' \\|     |// '. 
                 / \\|||  :  |||// \ 
                / _||||| -:- |||||- \ 
               |   | \\\  -  /// |   | 
               | \_|  ''\---/''  |_/ | 
               \  .-\__  '-'  _/-. / 
             _'. .'  /--.--\  `. .'_ 
          ."" '<  `._\_<|>/__.' >' "". 
         | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
         \  \ `.   \ _\ /_ _/   .-` /  / 
     =====`-._`._ \_/_.-`__.-'===== 
                       `=---=' 
 
~~~~~~~~~~~~~~~~~~~~~~~  
  Your Name 2021 @ Codechef/codeforces  
~~~~~~~~~~~~~~~~~~~~~~*/  
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long 
#define vl vector <ll> 
#define pii pair<int,int>
#define ull unsigned long long
#define mii map<int,int>
#define pqb priority_queue<int>
#define FOR(i,a,b) for(int i=a ; i<b ; i++)
#define forRL(i,a,b) for(i=a;i>=b;i--)
#define INF 1e18
#define MOD 1000000007
#define PI 3.1415926535897932384626
#define gc getchar_unlocked
#define input_ARR(arr,n) for(int i=0 ; i<n ;i++) {cin>>arr[i]}
// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())
//Short hand for usual tokens
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) x.begin(), x.end() //Forward Traversal
#define rall(x) x.rbegin(), x.rend() //Reverse Traversal
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
using namespace __gnu_pbds;
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
const int mod = 1'000'000'007;
const int N = 3e5, M = N;

/* ========== YOUR CODE HERE ========= */


void solve (){
    cout<<"I AM BATMAN " ;
}


/* ========== YOUR CODE HERE ========= */

//Driver Function
int main() {
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ios::sync_with_stdio(0);
cin.tie(0),cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int test ;
cin>>test ;

while(test--) {
solve() ;
}

return 0 ;
}
