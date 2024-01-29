#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;

using pii=pair<int,int>;
ll lcm(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}

int main()
{
    int n;
    cin>>n;
    ll ans,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0) ans=x;
        else ans=lcm(ans,x);
    }
    cout<<ans<<endl;
}