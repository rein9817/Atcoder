#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum+=a*b;
    }
    if(sum>=s)
    {
        cout<<sum<<endl;
    }
    else {
        cout<<sum+k<<endl;
    }
}