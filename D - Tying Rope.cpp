#include <bits/stdc++.h>
using namespace std;
const int maxn=4e5+10;
int parent[maxn];
#define red(i) (i<<1)
#define blue(i) ((i<<1)|1)
int x;
int y;
int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}

void Merge(int a,int b)
{
    a=find(a);b=find(b);
    if(a==b)
    {
        x++;
        return ;
    }
    parent[a]=b;
    y--;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    
    cin>>n>>m;
    x=0;
    y=2*n;
    for(int i=1;i<=2*n+10;i++) parent[i]=i;
    for(int i=1;i<=n;i++)
    {
        Merge(red(i),blue(i));
    }
    
    for(int i=0;i<m;i++)
    {
        int a,b;
        char c,d;
        cin>>a>>c>>b>>d;
        if(c=='R') a=red(a);
        else  a=blue(a);
        if(d=='R') b=red(b);
        else  b=blue(b);
        Merge(a,b);
    }
    cout<<x<<" "<<y-x<<"\n";
}