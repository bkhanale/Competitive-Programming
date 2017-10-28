#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ll med;
		med=(n+k-1)/2;
		cout<<a[med]<<endl;
	}
	return 0;
}