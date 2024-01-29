#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=100001;

string grid[105];

int n,m;

bool check(int x,int y)
{
    if(x>n||y>m) return false;
    if(x+3>n||y+3>m) return false;
    for(int i=x;i<x+3;i++)
    {
        for(int j=y;j<y+3;j++)
        {
            if(grid[i][j]!='#') return false;
        }
    }
    return true;
}

bool checkL(int x,int y)
{
    if(x>n||y>m) return false;
    if(y+3>m) return false;
    for(int i=y;i<y+3;i++)
    {
        if(grid[x][i]!='.') return false;
    }
    return true;
}

bool checkL1(int x,int y)
{
    if(x>n||y>m) return false;
    if(x+3>n) return false;
    for(int i=x;i<x+3;i++)
    {
        if(grid[i][y]!='.') return false;
    }
    return true;
}

int main()
{
    
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>grid[i];
    vector<pair<int,int>> res;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='#')
            {
                if(!check(i,j)) continue;
                if(!checkL(i+3,j)) continue;
                if(!checkL1(i,j+3)) continue;
                if(!check(i+6,j+6)) continue;
                if(!checkL(i+5,j+6)) continue;
                if(!checkL1(i+6,j+5)) continue;
                if(grid[i+3][j+3]!='.') continue;
                if(grid[i+5][j+5]!='.') continue;
                res.push_back({i+1,j+1});
            }
        }
    }
    sort(ALL(res));
    for(auto x:res){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}   