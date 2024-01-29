#include <bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;

int a[maxn];
using ll=long long ;

int n,m;
ll check(double x)
{
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]<x+m) ans++;
    }
    return ans;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    double left=0;
    double right=1e9+10;
    ll ans=0;
    while(right-left>0.001)
    {
        double mid=left+(right-left)/2;
        if(check(mid)>ans)
        {
            ans=check(mid);
            right=mid;
        }
        else {
            left=mid;
        }
    }
    cout<<ans<<endl;
}