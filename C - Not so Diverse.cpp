#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=200010;
int cnt[max_n];

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    sort(cnt,cnt+n);
    ll ans=0;
    for(int i=0;i<n-k;i++)
    {
        ans+=cnt[i];
    }
    cout<<ans<<"\n";
}