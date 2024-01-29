#include<iostream>
#define int long long
using namespace std;
int  l=0,r=1e15,ans;
int n,m,a[200010];

bool check(int x)
{ 
	int now=a[1],cnt=1;
	for(int i=2;i<=n;i++){
		if(now+1+a[i]>x){
			cnt++;
			now=a[i];
		}
		else
			now+=a[i]+1;
	}
	return cnt<=m;
}

signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
    {
		cin>>a[i];
		l=max(l,a[i]); 
	}
	while(l<=r){
		int mid=(l+r)/2;
		if (check(mid))
			r=mid-1,ans=mid; 
		else l=mid+1;  
	}
	cout<<ans;
	return 0;
}