#include<bits/stdc++.h>
#define maxn 1000010
#define int long long
using namespace std;
int n,m,q,parent[maxn],ans[maxn];

struct node{
	int x,y,z,k;
}a[maxn];

int find(int x){
	return x==parent[x]?x:parent[x]=find(parent[x]);
}

void mst()
{
	int f1,f2,k=0;
	for(int i=1;i<=m+q;i++){
		f1=find(a[i].x);
		f2=find(a[i].y);
		if(f1!=f2)
        {
			if(a[i].k>m){
				ans[a[i].k-m]=1;
			}
			else{
				parent[f1]=f2;
				k++;
			}
		}
		if(k==n-1){
			break;
		}
	}
	return ;
}

signed main()
{
	cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
		parent[i]=i;
	}
	for(int i=1;i<=m+q;i++)
    {
		cin>>a[i].x>>a[i].y>>a[i].z;
		a[i].k=i;
	}
	sort(a+1,a+m+q+1,[&](const node &a,const node &b){
	    return a.z<b.z;
    }); 
	mst();
	for(int i=1;i<=q;i++){
		if(ans[i]==0)cout<<"No\n";
		else cout<<"Yes\n";
	}
    return 0;
} 