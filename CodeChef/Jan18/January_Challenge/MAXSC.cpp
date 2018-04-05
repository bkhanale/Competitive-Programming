#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<vector<ll> > a(n);
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				ll num;
				cin>>num;
				a[i].push_back(num);
			}
			sort(a[i].begin(),a[i].end());
		}
		ll sum=a[n-1][n-1],flag=0,max_s=a[n-1][n-1];
		for(ll i=n-2;i>=0;i--){
			ll ii=n-1,n_max;
			while((a[i][ii]>=max_s)&&(ii!=-1)){
				ii--;
			}
			if(ii==-1){
				n_max=-1;
			}else{
				n_max=a[i][ii];
			}
			if(n_max==-1){
				flag=1;break;
			}else{
				sum+=n_max;max_s=n_max;
			}
		}
		if(flag==0){
			cout<<sum<<endl;
		}else{
			cout<<"-1\n";
		}
	}
	return 0;
}