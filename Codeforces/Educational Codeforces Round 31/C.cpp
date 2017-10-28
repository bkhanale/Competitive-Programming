#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	ll n;
	cin>>n;
	ll p[n];
	for(ll i=1;i<=n;i++)
	{
		cin>>p[i];
	}

	vector<ll> v(100001);
	vector<ll> mp(100001);
	ll cnt=0;

	ll j=1;
	while(j<=n)
	{
		if(mp[p[j]]==0)
		{
			mp[p[j]]++;
			j=p[j];
			cnt++;
		}else{
			v.push_back(cnt);
			cnt=0;
			j++;
		}
	}

	sort(v.rbegin(),v.rend());

	ll ans=0;
	if(v.size()>1)
	{
		ans=v[0]+v[1];
		ans=(ans-1)*ans;
		for(ll i=2;i<v.size();i++)
		{
			ans+=v[i]*(v[i]-1);
		}
		ans+= n;
	}else{
		ans =v[0]*(v[0]-1);
		ans+=n;
	}
	cout<<ans<<endl;
	return 0;
}