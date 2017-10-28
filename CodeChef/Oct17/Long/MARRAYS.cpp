#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v[n+2];
		vector<ll> dp[n+2];
		for(ll i=0;i<n;i++)
		{
			ll m;
			cin>>m;
			for(ll j=0;j<m;j++)
			{
				ll ing;
				cin>>ing;
				v[i].pb(ing);
				dp[i].pb(0);
			}
		}
		if(n==2)
		{
			for(ll i=0;i<=1;i++)
			{
				sort(v[i].begin(),v[i].end());
			}
			cout<<max(v[0][v[0].size()-1]-v[1][0],v[1][v[1].size()-1]-v[0][0])<<endl;
			continue;
		}
		for(ll i=0;i<v[1].size();i++)
		{
			for(ll j=0;j<v[0].size();j++)
			{
				dp[1][i]=max(dp[1][i],abs(v[1][i]-v[0][j]));
			}
		}
		for(ll i=2;i<n;i++)
		{
			for(ll j=0;j<v[i].size();j++)
			{
				for(ll k=0;k<v[i-1].size();k++)
				{
					if(k+1==v[i-1].size())
					{
						dp[i][j]=max(dp[i][j],abs(v[i][j]-v[i-1][k])*i+dp[i-1][0]);
					}else{
						dp[i][j]=max(dp[i][j],abs(v[i][j]-v[i-1][k])*i+dp[i-1][k+1]);
					}
				}
			}
		}
		ll ans=-1;
		for(ll i=0;i<v[n-1].size();i++)
		{
			ans=max(ans,dp[n-1][i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}