#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
    if(x>=100 &&x<=675) return true;
    return false;
}
int main()
{
    string s[8];
    for(int i=0;i<8;i++) cin>>s[i];
    for(int i=1;i<8;i++)
    {
        int a=stoi(s[i]);
        int b=stoi(s[i-1]);
        if(a<b||a%25!=0||b%25!=0 || !check(a)||!check(b))
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}