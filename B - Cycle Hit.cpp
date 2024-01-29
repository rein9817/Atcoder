#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    map<string,int> cnt;
    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;
    if(cnt["H"]==1 && cnt["2B"]==1 && cnt["3B"]==1 && cnt["HR"]==1)
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
}