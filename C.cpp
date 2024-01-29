#include<bits/stdc++.h>
using namespace std;
int n,ans=0,a[100001];
struct node {
	int id,cnt;
}b1[100001],b2[100001];
bool cmp(node a,node b) {
	return a.cnt>b.cnt;
}
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) {
		if (i%2==1) {
			b1[a[i]].id=a[i]; b1[a[i]].cnt++;
		} 
		else {
			b2[a[i]].id=a[i]; b2[a[i]].cnt++;
		}
	}
	sort(b1+1,b1+100001,cmp); sort(b2+1,b2+100001,cmp);
	if (b1[1].id!=b2[1].id) {
		ans=(n-b1[1].cnt-b2[1].cnt);
	}
	else {
		ans=min(n-b1[1].cnt-b2[2].cnt,n-b1[2].cnt-b2[1].cnt);
	}
	cout<<ans<<endl;
	return 0;
}