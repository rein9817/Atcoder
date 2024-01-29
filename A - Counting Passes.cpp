#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;

void solve()
{
    int n,l;
    cin>>n>>l;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>=l) ans++;
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