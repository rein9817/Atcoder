#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;


using pii=pair<int,int>;

int main()
{
    multiset<int> s;
    int q;
    cin>>q;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        else if(op==2)
        {
            int x,c;
            cin>>x>>c;
            while(c-- && s.find(x)!=s.end())
            {
                s.erase(s.find(x));
            }
        }
        else {
            cout<<*s.rbegin()-*s.begin()<<"\n";
        }
    }
}