#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
		t-=86400-a[i];
		if(t<=0)
		{
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}