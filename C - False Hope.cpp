#include <bits/stdc++.h>
using namespace std;

int table[3][3];
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>table[i][j];
        }
    }
    int last=0;
    double temp=0;
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<3;j++)
        {
            if(i==j)
            {
                if(table[i][j]==table[i-1][j-1])
                {
                    
                }
            }
        }
    }
    double ans;
    cout<<fixed<<setprecision(9)<<ans<<"\n";
}