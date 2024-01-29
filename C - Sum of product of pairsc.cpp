#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long n,i=0,b=0,t=0,x=1e9+7; 
  cin>>n;
  vector<long> a(n); 
  for(;i<n;i++)
  {
    cin>>a[i];
    b+=a[i];
    b=b%x;
  }
  
  for(i=0;i<n-1;i++){
    b-=a[i]; 
    if(b<0){b+=x;}
    t+=b*a[i],
    t=t%x;
  }
  cout<<t<<endl;
}