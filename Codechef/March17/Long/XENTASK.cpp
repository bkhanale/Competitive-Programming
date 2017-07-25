#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x[n],y[n];
        ll sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>y[i];
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum1=sum1+x[i];
            }else{
                sum1=sum1+y[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum2=sum2+y[i];
            }else{
                sum2=sum2+x[i];
            }
        }
        cout<<min(sum1,sum2)<<endl;
    }
}
 
