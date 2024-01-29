#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int flag=0;
    int x=INT_MAX;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int a=stoi(s);
        if(a%10!=0)
        {
            flag=1;
            x=min(x,a);
        }
        sum+=a;
    }
    if(flag==0 && sum%10==0)
    {
        cout<<"0\n";
    }
    else if(flag==1 && sum%10==0)
    {
        cout<<sum-x<<"\n";
    }
    else {
        cout<<sum<<"\n";
    }

}