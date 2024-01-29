#include <bits/stdc++.h>
using namespace std;

char table[505][505];

int main()
{
    int h,w;
    cin>>h>>w;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++) cin>>table[i][j];
    }
    int upperx=INT_MIN,uppery=INT_MIN;
    int lowerx=INT_MAX,lowery=INT_MAX;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(table[i][j]=='#')
            {
                upperx=max(upperx,i);
                uppery=max(uppery,j);
                lowery=min(lowery,j);
                lowerx=min(lowerx,i);
            }
        }
    }
    for(int i=lowerx;i<=upperx;i++)
    {
        for(int j=lowery;j<=uppery;j++)
        {
            if(table[i][j]=='.')
            {
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
}