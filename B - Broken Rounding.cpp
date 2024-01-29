#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    int x,k;
    cin>>x>>k;
    while(k--)
    {
        int temp=0;
        while(temp<=x)
        {
            temp+=10;
        }
        if(abs(x-(temp-10))>abs(x-temp))
        {
            x=temp;
        }
        else if(temp==x)
        {
            x=0;
            break;
        }
        else {
            x=temp-10;
        }
    cout<<x<<endl;
}