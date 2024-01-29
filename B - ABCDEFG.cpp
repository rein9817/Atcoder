#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    int temp[]={0,3,4,8,9,14,23};
    cout<<temp[b-'A']-temp[a-'A']<<endl;
}