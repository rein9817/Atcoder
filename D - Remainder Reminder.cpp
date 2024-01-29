#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
using ll=long long ;
ll n,k;
void solve()
{
    ll ans=0;
    cin>>n>>k;
    if(!k) 
    {
        cout<<n*n<<endl;
        return;
    }
    for(int i=1;i<=n-k;i++)
    {
        ll b=k+i;
        ans+=(n/b)*i;
        if(n%b>=k) ans+=n%b-k+1;
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}