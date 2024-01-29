#include <bits/stdc++.h>
using namespace std;
const int maxn=2010;
int table[maxn][maxn];
int dp[maxn][maxn];
int h,w;

int f(int x,int y)
{
    if(x==h && y==w) return 0;
    if(dp[x][y]) return dp[x][y];
    if((x+y+1)%2==1)
    {
        dp[x][y]=INT_MIN;
        if(x<h) dp[x][y]=max(dp[x][y],f(x+1,y)+table[x+1][y]);
        if(y<w) dp[x][y]=max(dp[x][y],f(x,y+1)+table[x][y+1]);
        return dp[x][y];
    }
    else {
        dp[x][y]=INT_MAX;
        if(x<h) dp[x][y]=min(dp[x][y],f(x+1,y)-table[x+1][y]);
        if(y<w) dp[x][y]=min(dp[x][y],f(x,y+1)-table[x][y+1]);
        return dp[x][y];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>h>>w;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            char c;
            cin>>c;
            table[i][j]=(c=='+'?1:-1);
        }
    }
    int ans=f(1,1);
    if(ans>0)
    {
        cout<<"Takahashi\n";
    }
    else if(ans==0)
    {
        cout<<"Draw\n";
    }
    else {
        cout<<"Aoki\n";
    }
}