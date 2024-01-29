#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0; //nothing
    int cnt=0;
    int left;
    int right;
    int last=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
        {
            if(cnt==0)
            {
                cnt++;
                left=i;
            }
            else
            {
                right=i;
                if((left&1)==(right&1))
                {
                    cout<<"No\n";
                    return 0;
                }
            }
        }
        else if(s[i]=='K' && last!=1)
        {
            cout<<"No\n";
            return 0;
        }
        else if(s[i]=='R')
        {
            last++;
        }
    }
    cout<<"Yes\n";
}