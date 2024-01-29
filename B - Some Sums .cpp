#include <iostream>
#include <vector>
using namespace std;
int n,a,b;
bool check(int x)
{
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    if(sum>=a && sum<=b) return true;
    return false;
}
int main()
{
    
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(check(i)) sum+=i;
    }
    cout<<sum<<"\n";
}