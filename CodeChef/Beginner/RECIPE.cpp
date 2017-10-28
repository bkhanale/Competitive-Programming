#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,n,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ing[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ing[i];
        }
        ans=ing[0];
        for(i=0;i<n;i++)
        {
            ans=__gcd(ans,ing[i]);
        }
        for(i=0;i<n;i++)
        {
            cout<<ing[i]/ans<<" ";
        }
        cout<<endl;
    }
}
 
