#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const ll maxn=1e3+10;

int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i*i*i<=n;i++)
    {
        for(ll j=i;i*j*j<=n;j++)
        {
            ans+=n/i/j-j+1;
        }
    }
    cout<<ans<<endl;
}