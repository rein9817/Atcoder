#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define int128 __int128
#define FOR(i, m, n) for(int i=(m);i<=(n);i++)
#define ROF(i, m, n) for(int i=(m);i>=(n);i--)
#define REP(i, n) for(int i=0;i<(n);i++)
#define BG(v) v.begin()
#define ED(v) v.end()
#define ALL(v) (v).begin(), (v).end()
#define SZ(v) v.size()
#define FI(v) v.first
#define SE(v) v.second
#define func(v) function<v>
#define DFS func(void(int, int))
#define PII pair<int,int>
#define PLL pair<ll, ll> 
#define endl '\n'
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
const double EPS = 1e-8;
const int P = 998244353;
const int G = 3;
const int GI = 332748118;
template <typename T, typename U>
inline bool chmax(T& a, U b) { return a < b ? (a = b, true) : false; }
template <typename T, typename U>
inline bool chmin(T& a, U b) { return a > b ? (a = b, true) : false; }
void IOSinit() {
	ios :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}
int fp(int x,int y) {
	int res = 1;
	for(;y;y >>= 1) {
		if(y & 1) res = (1ll * res * x) % P;
		x = (1ll * x * x) % P;
	}
	return res;
}
void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> e(n);
	vector<int> a(n);
	FOR(u, 1, n - 1) {
		int v;
		cin >> v; v--;
		e[v].push_back(u); 
	}
	REP(i, m) {
		int x, y;
		cin >> x >> y; x--;
		chmax(a[x], y + 1);
	}
	func(void(int)) dfs = [&] (int u) {
		for(int v : e[u]) {
			chmax(a[v], a[u] - 1);
			dfs(v);
		}
	};
	dfs(0);
	cout << count_if(ALL(a), [&] (int x) {return x > 0;}) << endl;
}
int main() {
	IOSinit();
	solve();
	return 0;
}