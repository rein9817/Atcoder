#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
char st[maxn];
int top;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        st[++top]=s[i];
        if(top>=3)
        {
            if(st[top-2]=='A' && st[top-1]=='B' && st[top]=='C')
            {
                top-=3;
            }
        }
    }
    for(int i=1;i<=top;i++)
    {
        cout<<st[i];
    }
}