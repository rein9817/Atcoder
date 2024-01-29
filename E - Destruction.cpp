#include <bits/stdc++.h>
using namespace std;

class unionfind{
public:
	int par[201000];
	int siz[201000];
	unionfind(long long n){
		for(long long i = 0;i < n;i++){
			par[i] = -1;
			siz[i] = 1;
		}
	}
	long long root(long long x){
		while(par[x] != -1){
			x = par[x];
		}
		return x;
	}
	void unite(long long a,long long b){
		long long ra = root(a);
		long long rb = root(b);
		if(ra == rb) return;
		if(siz[ra] < siz[rb]){
			siz[rb] += siz[ra];
			par[ra] = rb;
		}else{
			siz[ra] += siz[rb];
			par[rb] = ra;
		}
	}
	bool same(long long a,long long b){
		return (root(a) == root(b));
	}
};

int main()
{
	long long n,m;
	cin >> n >> m;
	unionfind uf(n);
	vector<vector<pair<long long,long long>>> g(n,vector<pair<long long,long long>>());
	vector<pair<pair<long long,long long>,long long>> it;
	for(long long i = 0;i < m;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		a--;b--;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
		if(c < 0){
			uf.unite(a,b);
		}else{
			it.push_back({{a,b},c});
		}
	}
	long long ans = 0;
	sort(it.begin(),it.end(),[](pair<pair<long long,long long>,long long> a,pair<pair<long long,long long>,long long> b){return a.second < b.second;});
	for(long long i = 0;i < it.size();i++){
		if(uf.same(it[i].first.first,it[i].first.second)){
			ans += it[i].second;
		}else{
			uf.unite(it[i].first.first,it[i].first.second);
		}
	}
	cout << ans << endl;
}
