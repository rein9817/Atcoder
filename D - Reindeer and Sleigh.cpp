#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
vector<int> edge[maxn];
using pii=pair<int,int>;
int r[maxn];

void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>r[i];
    sort(r,r+n);
    vector<int> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+r[i-1];
    }
    while(q--)
    {
        int x;
        cin>>x;
        int pos=upper_bound(prefix.begin(),prefix.end(),x)-prefix.begin();
        cout<<pos-1<<"\n";
    }
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}