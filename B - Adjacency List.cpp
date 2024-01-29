#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100010;
set<int> edge[maxn];

using pii=pair<int,int>;

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].insert(b);
        edge[b].insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<edge[i].size()<<" ";
        for(int x:edge[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}