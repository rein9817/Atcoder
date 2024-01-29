#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=100001;

int main()
{
    rein
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        a[i]--;
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i==a[i]) cnt++;
    }
    ll ans=cnt*1LL*(cnt-1)/2;
    for(int i=0;i<n;i++)
    {
        if(a[i]>i && a[a[i]]==i) ans++;
    }
    cout<<ans<<"\n";
}