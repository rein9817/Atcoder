#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;

using pii=pair<int,int>;

void solve()
{   
    int n;
    cin>>n;
    map<int,int> cnt;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(cnt[x]==0)
        {
            cout<<"NO\n";
            return ;
        }
        cnt[x]--;
    }
    cout<<"YES\n";
}
int main()
{
    solve();
}