#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    string s[h];
    string t[h];
    char c;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>c;
            s[j]+=c;
        }
    }
    
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>c;
            t[j]+=c;
        }
    }
    sort(s,s+w);
    sort(t,t+w);
    for(int i=0;i<w;i++)
    {
        if(s[i]!=t[i])
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}