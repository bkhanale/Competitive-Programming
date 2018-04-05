#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 300010;
const int MOD = 1000000007;
#define pb push_back

vector<ll> tree[N];
ll f[N],val[N];

void fun(ll cur,ll ii,ll j,ll va){
	if(va>=2){
		f[va]=(f[va-1]+f[va-2])%MOD;
	}
	val[cur]=(val[cur]+f[va])%MOD;
	if(va==j){
		return;
	}
	for(ll i:tree[cur]){
		if(i==ii){
			continue;
		}
		fun(i,cur,j,va+1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		for(ll i=1;i<n;i++){
			ll u,v;
			cin>>u>>v;
			tree[u].pb(v);
			tree[v].pb(u);
		}
		while(q--){
			ll ch,v;
			cin>>ch>>v;
			if(ch==1){
				ll k,a,b;
				cin>>k>>a>>b;
				f[0]=a;f[1]=b;
				fun(v,v,k,0);
			}else{
				cout<<val[v]<<endl;
			}
		}
		for(ll i=1;i<=n;i++){
			tree[i].clear();
			val[i]=0;
		}
	}
	return 0;
}