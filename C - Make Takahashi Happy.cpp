#include <bits/stdc++.h>
using namespace std;
#define int long long 

int table[15][15];
bool visited[15][15];
int dx[2]={0,1};
int dy[2]={1,0};
int temp[200];

int h,w;
int ans;


bool check(int depth)
{
    set<int> s;
    for(int i=1;i<=depth;i++)
    {
        s.insert(temp[i]);
    }
    if(s.size()==depth) return true;
    return false;
}

void dfs(int depth,int x,int y)
{
    if(x==h && y==w)
    {
        temp[depth]=table[x][y];
        if(check(depth)) ans++;
        return ;
    }
    visited[x][y]=1;
    temp[depth]=table[x][y];
    for(int dir=0;dir<2;dir++)
    {   
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if(nx<1||ny<1||nx>h||ny>w) continue;
        if(visited[nx][ny]) continue;
        
        dfs(depth+1,nx,ny);
    }
    visited[x][y]=0;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>h>>w;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cin>>table[i][j];
        }
    }
    ans=0;
    dfs(1,1,1);
    cout<<ans<<"\n";
}