#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fun(vector<ll> a,ll sz){
	ll max_s=-1000000001,mx=0;
	for(ll i=0;i<sz;i++){
		mx+=a[i];
		if(max_s<mx){
			max_s=mx;
		}
		if(mx<0){
			mx=0;
		}
	}
	return max_s;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll max_s,sum=0;
		vector<ll> a;
		for(ll i=0;i<n;i++){
			ll num;
			cin>>num;
			a.push_back(num);
			sum+=num;
		}
		ll ans1,ans2;
		ans1=fun(a,a.size());
		a.insert(a.end(),a.begin(),a.end());
		ans2=fun(a,a.size());
		if(k==1){
			cout<<ans1<<endl;
		}else{
			cout<<max((k-2)*sum+ans2,ans2)<<endl;
		}
	}
	return 0;
}