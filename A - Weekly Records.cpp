#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(7*n+1);
    int cnt=0;
    int sum=0;
    for(int i=1;i<=7*n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(i%7==0)
        {
            cout<<sum<<" ";
            sum=0;
        }
    }
}