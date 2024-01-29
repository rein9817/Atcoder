#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1) continue;
        temp+=a[i];
    }
    if(temp==x) {
        cout<<0<<"\n";
        return 0;
    }
    else {
        
    }

}
