#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt[10];
    int x=0;
    for(int i=0;i<n;i++) {
        int b;
        cin>>b;
        if(b<400)
        {
            cnt[0]=1;
        }
        else if(b<800)
        {
            cnt[1]=1;
        }
        else if(b<1200)
        {
            cnt[2]=1;
        }
        else if(b<1600)
        {
            cnt[3]=1;
        }
        else if(b<2000)
        {
            cnt[4]=1;
        }
        else if(b<2400)
        {
            cnt[5]=1;
        }
        else if(b<2800)
        {
            cnt[6]=1;
        }
        else if(b<3200)
        {
            cnt[7]=1;
        }
        else {
            x++;
        }
    }
    int temp=0;
    for(int i=0;i<8;i++)
    {
        if(cnt[i]!=0){
            temp++;
        }
    }
    if(temp)
    {
        cout<<temp<<" "<<temp+x<<"\n";
    }
    else {
        cout<<1<<" "<<x<<"\n";
    }
}