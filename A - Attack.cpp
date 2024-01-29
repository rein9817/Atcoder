#include <bits/stdc++.h>
using namespace std;
#define ALL(x) begin(x),end(x)

int main()
{
    long long a,b;
    cin>>a>>b;
    long long ans=(a%b==0?a/b:a/b+1);
    cout<<ans<<"\n";
}