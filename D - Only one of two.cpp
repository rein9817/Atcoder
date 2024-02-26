#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int lcm=n*m/__gcd(n,m);
    int left=0;
    int right=2e+18;
    int rank;
    while(left+1<right)
    {
        int mid=left+(right-left)/2;
        rank=(mid/n)+(mid/m)-2*(mid/lcm);
        if(rank<k) left=mid;
        else right=mid;
    }
    cout<<right<<"\n";
}