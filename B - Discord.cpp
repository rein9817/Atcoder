#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            bool flag=false;
            for(int k=0;k<m;k++)
            {
                for(int l=0;l<n-1;l++)
                {
                    if(a[k][l]==i && a[k][l+1]==j) flag=true;
                    if(a[k][l]==j && a[k][l+1]==i) flag=true;
                }   
            }
            if(!flag) ans++;
        }
    }
    cout<<ans<<endl;
}