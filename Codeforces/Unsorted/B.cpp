#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ninf (ll) -1e18

int main(){
	ll n;
	cin>>n;
	ll ans=ninf,d[105];
	for(ll i=0;i<=105;i++){
		d[i]=0;
	}
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<=n;j++){
			for(ll k=i+1;k<=j;k++){
				d[k]++;
			}
		}
	}
	for(ll i=0;i<=n;i++){
		ans=max(ans,d[i]);
	}
	cout<<ans<<endl;
	return 0;
}