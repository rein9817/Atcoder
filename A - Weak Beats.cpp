#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=1;i<=s.length();i++)
    {
        if(i%2==0 && s[i-1]=='0')
        {
            continue;
        }
        else {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}