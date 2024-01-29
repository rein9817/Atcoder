#include <bits/stdc++.h>
using namespace std;
using ll=long long;
inline __int128 read()
{
    char ch=getchar();
    __int128 x=0,f=1;
    while(ch<'0'||ch>'9')
    {
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&& ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}

inline void print(__int128 x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
    {
        print(x/10);
    }
    putchar(x%10+'0');
}
int main()
{
    int a[65];
    for(int i=0;i<64;i++) cin>>a[i];
    __int128 sum=0;
    __int128 f=1;
    sum+=a[0]*f;
    for(int i=1;i<64;i++)
    {
        f*=2;
        sum+=a[i]*f;
    }
    print(sum);
}
