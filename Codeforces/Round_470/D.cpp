#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 3e5 + 5;

struct node {
	ll child[2];
	ll cross[2];
} tr[20 * N];

ll n, cnt = 0;
ll a[N], res;

void upd(ll pos,ll pre,ll val) {

	ll x = (val >> pos) & 1;

	if(tr[pre].cross[x] == 0) {
		tr[pre].child[x] = ++cnt;
	}

	tr[pre].cross[x]++;

	if(pos == 0) {
		return;
	}

	upd(pos - 1, tr[pre].child[x], val);

}

void dfs(ll pos, ll pre, ll val)	{

	ll x = (val >> pos) & 1;

	if(tr[pre].cross[x] == 0) {
		tr[pre].cross[1 - x]--;
		res ^= (1 << pos);
		if(pos == 0) {
			return;
		}
		dfs(pos - 1, tr[pre].child[1 - x], val);
		return;
	}

	tr[pre].cross[x]--;

	if(pos == 0) {
		return;
	}

	dfs(pos - 1, tr[pre].child[x], val);

}
void input() {

	cin >> n;

	for(ll i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}

	for(ll i = 1 ; i <= n ; i++) {
		ll x;
		cin >> x;
		upd(29,0,x);
	}

}
void solve() {

	for(ll i = 1 ; i <= n ; ++i) {
		res = 0;
		dfs(29,0,a[i]);
		cout << res << " ";
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	input();
	solve();
}