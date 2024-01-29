#include <bits/stdc++.h>
using namespace std;
#define ALL(x) begin(x),end(x)

int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(ALL(a));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]<=d){
                cout<<a[j]<<"\n";
                return 0;
            }
        }
    }
    cout<<-1<<"\n";
}