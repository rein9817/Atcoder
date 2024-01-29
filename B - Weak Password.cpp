#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3])
    {
        cout<<"Weak";
        return 0;
    }
    bool flag=true;
    for(int i=0;i<3;i++)
    {
        if((s[i]-'0'+1)%10!=s[i+1]-'0')
        {
            flag=false;
            break;
        }
    }
    if(flag) {
        cout<<"Weak";
    }
    else {
        cout<<"Strong";
    }
}