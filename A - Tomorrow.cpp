#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M,D;
    cin>>M>>D;
    int y,m,d;
    cin>>y>>m>>d;
    d++;
    if(d>D)
    {
        d=1;
        m++;
    }
    if(m>M)
    {
        m=1;
        y++;
    }
    cout<<y<<" "<<m<<" "<<d;
}