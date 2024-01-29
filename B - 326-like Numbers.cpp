#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n%10;
    int b=n/10%10;
    int c=n/100;
    if(a*b==c)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=n;i<=919;i++)
    {
        a=i%10;
        b=i/10%10;
        c=i/100;
        if(c*b==a)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}