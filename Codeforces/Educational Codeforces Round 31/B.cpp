#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum+n-1==x){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}