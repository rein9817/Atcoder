#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn];
using ll=long long ;

int main()
{
    int n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);    
    vector<int> b(n,sum/n);
    for(int i=0;i<sum%n;i++)
    {
        b[n-1-i]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]-b[i]);
    }
    cout<<ans/2<<"\n";
}