#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

#define ll long long
#define ull unsigned ll
#define ioi exit(0);

#define f first
#define s second

#define inf 1e9 + 7;

#define NFS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)

#define endl "\n"

#define in(x) insert(x)

#define rep(x,y,z) for(int x=y;x<=z;x++)
#define per(x,y,z) for(int x=y;x>=z;x--)

using namespace std;

const ll MOD = (998244353);

ll fact[100005];
ll inv[100005];

ll pot(ll x,ll y){
	if(y==0) return 1;
	if(y==1) return x;
	ll ans = 1;
	if(y%2==1) ans = x;
	ll val = pot(x,y/2);
	ans *= val;
	ans %= MOD;
	ans *= val;
	ans %= MOD;
	return ans;
}

void init(){
	fact[0] = 1;
	for(int i=1;i<=100000;i++){
		fact[i] = i*fact[i-1];
		fact[i] %= MOD;
	}
	for(int i=0;i<=100000;i++){
		inv[i] = pot(fact[i],MOD-2)%MOD;
	}
}

ll comb(ll x,ll y){
	return (fact[x]*inv[x-y])%MOD;
}

ll func(ll x,ll y,ll a){
	return (((comb(x,a) * comb(y,a))%MOD) * inv[a])%MOD;
}

ll a,b,c;

int main(){
	NFS
	
	init();
	cin>>a>>b>>c;
	ll ans = 0;
	ll inicial = 0;
	int maxi = min(a,c);
	for(int i=0;i<=maxi;i++){
		inicial += func(a,c,i);
		inicial %= MOD;
	}
	ll sum2 = 0;
	for(int i=0;i<=min(b,c);i++){
		sum2 += func(b,c,i);
		sum2 %= MOD;
	}
	int maxi1=min(a,b) , maxi2 = min(b,c);
	for(int i=0;i<=maxi1;i++){
		ll fin = ( inicial * func(a,b,i) )%MOD;
		fin *= sum2;
		fin %= MOD;
		ans += fin;
		ans %= MOD;
	}
	cout<<ans<<'\n';
	
	return 0;
}