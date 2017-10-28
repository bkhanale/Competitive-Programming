#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        cout<<a[n+n/2]<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[i+n]<<" ";
        }
        cout<<endl;
    }
}
 
