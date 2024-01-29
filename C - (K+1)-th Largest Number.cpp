#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;

using ll=long long ;
ll a[maxn];
ll b[maxn];
ll c[maxn];
int idx=0;
map<ll,int> cnt;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!cnt[a[i]])
        {
            cnt[a[i]]=1;
            b[idx++]=a[i];
        }
    }
    sort(b,b+n,greater<ll>());
    for(int i=0;i<n;i++)
    {
        int pos=lower_bound(b,b+idx,a[i],greater<ll>())-b;
        c[pos]++;
    }
    for(int i=0;i<n;i++) cout<<c[i]<<"\n";
}