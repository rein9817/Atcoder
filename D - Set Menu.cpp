#include <bits/stdc++.h>
using namespace std;

typedef struct node 
{
    int val;
    int cnt;
    
}node;
node a[200010],b[200010];
using ll=long long ;

int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<node> pq;
    for(int i=0;i<n;i++)
    {   
        cin>>a[i].val;
        a[i].cnt=0;
        pq.push(a[i]);
    }
    for(int i=0;i<m;i++)
    {   
        cin>>b[i].val;
        b[i].cnt=0;
        pq.push(b[i]);
    }
    ll ans=0;
    while(!pq.empty())
    {
        auto x=pq.top();
    }
}