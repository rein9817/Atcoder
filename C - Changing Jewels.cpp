#include <bits/stdc++.h>
using namespace std;
int n,x,y;

long long dfs(int level,bool flag)
{
    if(level==1) 
    {
        return flag?0:1;
    }
    if(flag)
    {
        return dfs(level-1,true)+dfs(level,false)*x;
    }
    else {
        return dfs(level-1,true)+dfs(level-1,false)*y;
    }
}

int main()
{
    cin>>n>>x>>y;
    cout<<dfs(n,true)<<"\n";
}