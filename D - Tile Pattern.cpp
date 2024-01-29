#include <bits/stdc++.h>
using namespace std;
char p[1005][1005];
#define int long long 
int table[1005][1005];
int n,q;

int g(int h,int w)
{
    if(h<=n &&w<=n) return table[h][w];
    int hq=h/n; int wr=w%n;int hr=h%n; int wq=w/n;
    int ans=0;
    ans+=g(n,n)*hq*wq;
    ans+=g(hr,n)*wq;
    ans+=g(n,wr)*hq;
    ans+=g(hr,wr);
    return ans;
}

int f(int A, int B, int C, int D) {
  return g(C, D) - g(A, D) - g(C, B) + g(A, B);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>p[i][j];
    }   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            table[i][j]+=table[i-1][j]+table[i][j-1]-table[i-1][j-1]+(p[i-1][j-1]=='B');
        }
    }
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<f(a,b,c+1,d+1)<<"\n";
    }
}