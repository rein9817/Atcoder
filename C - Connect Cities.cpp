#include <bits/stdc++.h>
using namespace std;

const int max_n=100000;
int parent[max_n];

int find(int index)
{
    return parent[index]==index?index:parent[index]=find(parent[index]);
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;  
        a=find(a);
        b=find(b);
        if(a!=b)
        {
            cnt++;
            parent[a]=b;
        }
    }
    cout<<n-1-cnt<<"\n";
}