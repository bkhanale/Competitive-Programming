#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n,del=0;
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]+1)
            {
                if(a[i]+1==a[i+1])
                {
                    del=a[i-1];
                }else{
                    del=a[i];
                }
                break;
            }
        }
        cout<<del<<endl;
    }
}
 
