#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,g,m;
    cin>>k>>g>>m;
    int tempa=0,tempb=0;
    while(k--)
    {
        if(tempa==g)
        {
            tempa=0;
        }
        else if(tempb==0)
        {
            tempb=m;
        }
        else 
        {
            tempa=tempa+tempb;
            if(tempa>=g)
            {
                tempb=tempa-g;
                tempa=g;
            }
            else tempb=0;
        }
        // cout<<tempa<<" "<<tempb<<endl;
    }
    cout<<tempa<<" "<<tempb<<endl;
}