#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        if(y<=x+2)
        {
            cout<<"Yes\n";
        }
        else {
            cout<<"No\n";
        }
    }
    else { // x>y
        if(x<=y+3)
        {
            cout<<"Yes\n";
        }
        else {
            cout<<"No\n";
        }
    }
    
}