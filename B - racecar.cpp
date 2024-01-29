#include <bits/stdc++.h>
using namespace std;

// bool check(string a)
// {
//     int m=(int)a.size()-1;
//     for(int i=0;i<=m/2;i++)
//     {
//         if(a[i]!=a[m-i+1]) return false;
//     }
//     return true;
// }
int main()
{
    int n;
    cin>>n;
    string s[105];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string temp=s[i]+s[j];
            string k=temp;
            string a=s[j]+s[i];
            string b=a;
            reverse(a.begin(),a.end());
            reverse(temp.begin(),temp.end());
            if(k==temp||a==b)
            {
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
}