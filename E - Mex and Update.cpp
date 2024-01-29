#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
int a[maxn];
using pii=pair<int,int>;

void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int pos,k;
        cin>>pos>>k;
        a[pos-1]=k;
    }
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}