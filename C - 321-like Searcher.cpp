#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    int n=s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]<=s[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(n<=10)
    {
        cout<<n<<endl;
        return 0;
    }
    else 
    {
        int ans=10;
        for(int i=11;;i++)
        {
            string s=to_string(i);
            int temp=check(s);
            if(temp)
            {
                ans++;
                if(ans==n)
                {
                    cout<<i<<"\n";
                    return 0;
                }
            }
            else {
                continue;
            }
        }
    }
}