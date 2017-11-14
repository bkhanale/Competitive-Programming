#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define INF 1000000007
 
int main()
{
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
		ll a0[n],a1[n],a2[n],a3[n];
		for(ll i=0;i<n;i++){
			cin>>a0[i]>>a1[i]>>a2[i]>>a3[i];
		}
		ll q;
		cin>>q;
		while(q--){
			ll t,mini;
			cin>>t;
			for(ll i=0;i<n;i++){
				ll prod=(a0[i])+(a1[i]*t)+(a2[i]*t*t)+(a3[i]*t*t*t);
				if(i==0){
					mini=prod;
				}else{
					if(prod<mini){
						mini=prod;
					}
				}
			}
			cout<<mini<<endl;
		}
	}
	return 0;
} 