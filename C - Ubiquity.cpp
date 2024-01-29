#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
const int mod=1e9+7;

ll mul(ll a,ll b)
{
    if(b==0) return 1;
    ll ans=mul(a,b/2);
    ans=(ans+mod)%mod;
    if(b&1) return ans*ans%mod*a%mod;
    return ans*ans%mod;
}
int main()
{
    ll n;
    cin>>n;
    ll ans=mul(10,n)-2*mul(9,n)%mod+mul(8,n);
    ans=(ans+mod)%mod;
    cout<<ans<<endl;
}