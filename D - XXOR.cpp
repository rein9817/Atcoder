#include<bits/stdc++.h>
#define ll long long
#define rg register int
using namespace std;
ll read(){
	char ch=getchar();
	ll res=0,f=1;
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		res=(res<<1)+(res<<3)+ch-'0';
		ch=getchar();
	}
	return res*f;
}
void write(ll x){
	if(x>9) write(x/10);
	putchar((x%10)^48);
}
const int N=1e5+5;
ll k,l,ans,a[N],f[60][2];
int main(){
	int i,j,l,n,m,num1,num2;
	n=read();k=read();
	for(i=1;i<=n;i++) a[i]=read();
	for(i=0;i<=55;i++) f[i][0]=f[i][1]=-1;
	f[51][0]=0;
	for(i=50;i>=0;i--){
		num1=num2=0;
		for(j=1;j<=n;j++){
			if((1ll<<i)&a[j]) num1++;
			else num2++;
		}
		if((1ll<<i)&k){
			if(f[i+1][0]!=-1)
			f[i][0]=f[i+1][0]+1ll*(1ll<<i)*num2;
			if(f[i+1][1]!=-1)
			f[i][1]=f[i+1][1]+1ll*(1ll<<i)*max(num1,num2);
			if(f[i+1][0]!=-1)
			f[i][1]=max(f[i][1],f[i+1][0]+1ll*(1ll<<i)*num1);
		}
		else{
			if(f[i+1][0]!=-1)
			f[i][0]=f[i+1][0]+1ll*(1ll<<i)*num1;
			if(f[i+1][1]!=-1)
			f[i][1]=f[i+1][1]+1ll*(1ll<<i)*max(num1,num2);
		}
	}
	write(max(f[0][0],f[0][1]));
	return 0;
}