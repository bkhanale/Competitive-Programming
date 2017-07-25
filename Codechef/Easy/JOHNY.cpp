#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll k;
        cin>>k;
        ll un=a[k-1];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==un)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
 
