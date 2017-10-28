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
		ll n;
		cin>>n;
		ll h[n],flag=0,cnt=0;
		for(ll i=0;i<n;i++)
		{
			cin>>h[i];
		}
		for(ll i=1;i<n-1;i++)
		{
			if(h[i-1]>h[i] && h[i+1]>h[i])
				cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}