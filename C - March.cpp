#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int p[10]={0 ,0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,2};
int q[10]={1 ,1 ,1 ,2 ,2 ,3 ,2 ,2 ,3 ,3};
int r[10]={2 ,3 ,4 ,3 ,4 ,4 ,3 ,4 ,4 ,4};

int main()
{
    int n;
    cin>>n;
    ll cnt[5]={};
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='M'){
            cnt[0]++;
        }
        else if(s[0]=='A')
        {
            cnt[1]++;
        }
        else if(s[0]=='R'){
            cnt[2]++;
        }
        else if(s[0]=='C'){
            cnt[3]++;
        }
        else if(s[0]=='H') cnt[4]++;
    } 
    ll res=0;
    for(int d=0;d<10;d++)
    {
        res+=cnt[p[d]]*cnt[q[d]]*cnt[r[d]];
    }
    cout<<res<<"\n";
}