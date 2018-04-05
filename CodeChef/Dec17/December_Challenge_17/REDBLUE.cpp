#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		vector<pair<ll,ll> >red(n),blue(m);
		for(ll i=0;i<n;i++){
			ll x,y;
			cin>>x>>y;
			red[i]=make_pair(x,y);
		}
		for(ll i=0;i<m;i++){
			ll x,y;
			cin>>x>>y;
			blue[i]=make_pair(x,y);
		}
		ll ans=99999;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				ll redb=0,reda=0,bluea=0,blueb=0;
				ll x1=red[i].first,y1=red[i].second,x2=blue[j].first,y2=blue[j].second;
				ll slope=(y2-y1)/(x2-x1),c=slope*(-1*x1)+y1;
				for(ll k=0;k<n;k++){
					if(red[k].){
						reda++;
					}else{
						redb++;
					}
				}
				for(ll k=0;k<m;k++){
					if(blue[k].second>slope*blue[k].first+c){
						bluea++;
					}else{
						blueb++;
					}
				}
				ans=min(ans,min(reda+blueb,redb+bluea));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}