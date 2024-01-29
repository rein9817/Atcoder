#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
bitset<maxn> visited;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        visited[x]=true;
        pq.push(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i])
        {
            cout<<0<<"\n";
        }
        else {
            while(i>pq.top()) pq.pop();
            cout<<pq.top()-i<<"\n";
        }
    }
}