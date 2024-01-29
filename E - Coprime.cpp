#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        temp=__gcd(a[i],temp);
    }
    if(temp!=1)
    {
        
    }
    else {
        cout<<"setwise coprime\n";
    }
}
