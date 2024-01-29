#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> ans;
vector<int> temp;
void dfs(int level,int cur)
{
    if(level==n)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=cur+1;i<=m;i++)
    {
        if(i==cur) continue;
        temp.push_back(i);
        dfs(level+1,i);
        temp.pop_back();
    }
}

int main()
{
    cin>>n>>m;
    set<array<int,3>> s;
    vector<vector<int>> ans;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=1;k<=m;k++)
            {
                if(i==j || j==k ||i==k) continue;
                if(k>j && j>i && s.find({i,j,k})==s.end())
                {
                    s.insert({i,j,k});
                    ans.push_back({i,j,k});
                }
            }
        }
    }
    for(auto x:ans)
    {
        for(int y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

}