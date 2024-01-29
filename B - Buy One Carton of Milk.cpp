#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,m,l;
    cin>>n>>s>>m>>l;
    int ans=INT_MAX;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if(i*6+j*8+k*12>=n)
                {
                    ans=min(ans,i*s+j*m+k*l);
                }
            }
        }
    }
    cout<<ans<<endl;
}