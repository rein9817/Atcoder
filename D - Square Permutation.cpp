#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    sort(s.begin(),s.end());
    long long res=0;
    for(long long v=0;v<=3200000;v++)
    {
        long long val=v*v;
        string temp=to_string(val);
        if(temp.size()>s.size()) break;
        while(temp.size()<s.size()) temp+="0";
        sort(temp.begin(),temp.end());
        if(s==temp) res++;
    }
    cout<<res<<endl;
}