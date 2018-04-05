#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
using namespace __gnu_pbds;
using namespace std;
#define MAX 200010
#define lesscount(x) order_of_key(x)
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;
template<typename T>
using ordered_set = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
ordered_set<ll> ft[MAX];
ll n, a[MAX];

ll insert(ll p, ll v) {
	for(; p <= n; p += p & -p) {
		ft[p].insert(v);
	}
}
ll qry(ll p, ll v, ll c = 0) {
	for(; p > 0; p -= p & -p) {
		c += ft[p].size() - ft[p].lesscount(v);
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll ret = 0;
	cin >> n;
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(ll i = 1; i <= n; i++) {
		a[i] = min(a[i], n);
	}
	for(ll i = n; i >= 1; i--) {
		ret += qry(a[i], i); insert(i, a[i]);
	}
	cout << ret << endl;
	return 0;
}