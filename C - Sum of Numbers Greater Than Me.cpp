#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
#define int long long 
int a[maxn];
int prefix[maxn];
int b[maxn];
signed main()
{
    ios_base::sync_with_stdio
    (0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        b[i]=a[i];
    }
    prefix[0]=0;
    sort(b,b+n);
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+b[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[n-1]) {
            cout<<0<<' ';
            continue;
        }
        auto pos=upper_bound(b,b+n,a[i])-b+1;
        cout<<prefix[n]-prefix[pos-1]<<" ";
    }
}