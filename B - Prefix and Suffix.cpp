#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    cout<<((s!=t.substr(0,n))*2+(s!=t.substr(m-n)))<<endl;
}