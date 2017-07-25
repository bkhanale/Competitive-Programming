#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long per(ll n, ll r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;
 
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
 
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,count=0,i,mx=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            mx=max(mx,a[i]);
        }
        cout<<n-mx<<endl;
    }
}
 
