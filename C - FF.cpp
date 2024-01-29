#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int>mp;
int main()
{
	int n,q;
	cin>>n>>q;
	while(q--)
	{
		int op,a,b;
		cin>>op>>a>>b;
		if(op==1)
			mp[{a,b}] = 1;
		else if(op==2)
			mp[{a,b}] = 0;
		else
			if(mp[{a,b}]&&mp[{b,a}])cout<<"Yes\n";
			else cout<<"No\n";
 
	}
	return 0;
}