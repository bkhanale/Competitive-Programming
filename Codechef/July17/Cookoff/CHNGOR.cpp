#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,bitr=0,ans=0,sum=0,temp=0;
        cin>>n;
        ll a[n],i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(i=0;i<n;i++)
        {
            ans = ans | a[i];
        }
        cout<<ans<<endl;
    }
}
