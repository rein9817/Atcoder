#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<0<<endl;
        return 0;
    }
    else if((b-a)%10==0)
    {
        cout<<(b-a)/10<<endl;
        return 0;
    }
    cout<<(b-a+10)/10<<endl;
}