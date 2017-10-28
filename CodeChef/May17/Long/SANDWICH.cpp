#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cal_ways(ll n,ll mini,ll k)
{
    if(n<=k)
    {
        return 1;
    }
    if(mini*k==n)
    {
        return 1;
    }
    ll more=mini*k-n;
    if(more<0)
    {
        return 0;
    }
    ll ans=0,i;
    for(i=k-more;i<=k;i++)
    {
        ans=ans+cal_ways(n-i,mini-1,k);
    }
    return ans;
}
void cal_min(ll n,ll k,ll m)
{
    ll mini=(n+k-1)/k;
    ll ways = cal_ways(n,mini,k)%m;
    cout<<mini<<" "<<ways<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,m;
        cin>>n>>k>>m;
        cal_min(n,k,m);
    }
    return 0;
}

