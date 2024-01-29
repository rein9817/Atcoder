#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
int table[105][105];

void solve()
{
    memset(table,0,sizeof(table));
    int n;
    cin>>n;
    for(int t=0;t<n;t++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=a;i<b;i++)
        {
            for(int j=c;j<d;j++)
            {
                table[i][j]=1;
            }
        }
    }
    
    int ans=0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            if(table[i][j])
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
 
    solve();
}