#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
 
#define INF 1000000007
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		ll a[n],low=0,up=INF,flag=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i=0;i<n;i++)
		{
			if(a[i]>r)
			{
				if(a[i]>up){
					flag=1;
					break;
				}
				up = a[i];
			}
			else if(a[i]<r)
			{
				if(a[i]<low){
					flag=1;
					break;
				}
				low = a[i];
			}
		}
		if(flag==1)
			cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
} 