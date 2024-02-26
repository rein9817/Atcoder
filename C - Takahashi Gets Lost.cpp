#include <bits/stdc++.h>
using namespace std;
int h,w,n;
string table[505];
const int dx[4]={1,-1,0,0};
const int dy[4]={0,0,1,-1};

int main()
{
    
    cin>>h>>w>>n;
    string t;
    cin>>t;
    for(int i=0;i<h;i++) cin>>table[i];
    int ans=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(table[i][j]=='.')
            {
                int x=i;
                int y=j;
                bool ok=true;
                for(int k=0;k<n;k++)
                {
                    switch (t[k])
                    {
                        case 'L':
                            y--;
                            break;
                        case 'U':
                            x--;
                            break;
                        case 'D':
                            x++;
                            break;
                        case 'R':
                            y++;
                            break;
                    }
                    if(table[x][y]=='#')
                    {
                        ok=false;
                        break;
                    }
                }
                if(ok) ans++;
            }
        }
    }
    cout<<ans<<"\n";
}