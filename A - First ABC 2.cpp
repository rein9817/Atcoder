#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int pos=s.find("ABC");
    if(pos==string::npos)
    {
        cout<<"-1\n";
    }
    else cout<<pos+1<<endl;
}