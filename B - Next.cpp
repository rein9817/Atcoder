#include <bits/stdc++.h>
using namespace std;

int a[105];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[n-1] && a[i]>ans) ans=a[i];
    }
    cout<<ans<<endl;
}