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
		ll n,p;
		cin>>n>>p;
		string ans="";
		if(p==1 || p==2)
		{
			cout<<"impossible\n";
		}else{
			if(p%2==0)
			{
				for(ll i=0;i<p;i++)
				{
					if(i==0 || i==p-1)
					{
						ans+='a';
					}else{
						ans+='b';
					}
				}
			}else{
				for(ll i=0;i<p;i++)
				{
					if(i%2==0)
					{
						ans+='a';
					}else{
						ans+='b';
					}
				}
			}
			string ans1="";
			for(ll i=0;i<n/p;i++)
			{
				ans1+=ans;
			}
			cout<<ans1<<endl;
		}
	}
	return 0;
} 