#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll> cnt;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;  
        cnt[a]+=b;
    }
    long long sum=0;
    for(auto x:cnt)
    {
        sum+=x.second;
        if(sum>=k)
        {
            cout<<x.first<<endl;
            return 0;
        }
    }
}