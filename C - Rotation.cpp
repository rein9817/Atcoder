#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    long long cnt=0;
    while(q--)
    {
        int op,x;
        cin>>op>>x;
        if(op==1)
        {
            cnt+=(-x+n)%n;
        }
        else {
            cout<<s[(x+cnt-1)%n]<<"\n";
        }
    }
}