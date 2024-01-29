#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
        ll t,k;
        cin>>t>>k;
        cout<<f(s,t,k)<<"\n";
    }
}