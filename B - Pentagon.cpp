#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;

int table[10][10];
void solve()
{
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    table[0][0]=0;
    table[0][1]=1;
    table[0][2]=2;
    table[0][3]=2;
    table[0][4]=1;
    

    table[1][1]=0;
    table[1][0]=1;
    table[1][2]=1;
    table[1][3]=2;
    table[1][4]=2;

    table[2][1]=1;
    table[2][0]=2;
    table[2][2]=0;
    table[2][3]=1;
    table[2][4]=2;


    table[3][1]=2;
    table[3][0]=2;
    table[3][2]=1;
    table[3][3]=0;
    table[3][4]=1;

    table[4][1]=2;
    table[4][0]=1;
    table[4][2]=2;
    table[4][3]=1;
    table[4][4]=0;

    if(table[a-'A'][b-'A']!=table[c-'A'][d-'A'])
    {
        cout<<"No\n";
    }
    else {
        cout<<"Yes\n";
    }
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}