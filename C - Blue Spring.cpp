#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
#define int long long 
using pii=pair<int,int>;

void solve()
{
    int n,d,p;
    cin>>n>>d>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    int sum=0;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if((i+1)%d==0)
        {
            if(sum>p)
            {
                ans+=p;
                sum=0;
            }
            else {
                ans+=sum;
                sum=0;
            }
        }
    }
    if(sum) 
    {
        if(sum>p)
        {
            ans+=p;
        }
        else {
            ans+=sum;
        }
    }
    cout<<ans<<"\n";
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}