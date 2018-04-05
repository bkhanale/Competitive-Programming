#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

map<string, ll> d;
ll a[100005], c[100005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, k, m;
	cin >> n >> k >> m;
	for(ll i = 1; i <= n; i++) {
		string s;
		cin >> s;
		d[s] = i;
	}
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(ll i = 1; i <= k; i++) {
		ll x;
		cin >> x;
		ll M = 1e18;
		vector<ll> v;
		for(ll j = 1; j <= x; j++) {
			ll y;
			cin >> y;
			v.pb(y);
		}
		for(auto j : v) M = min(M, a[j]);
		for(auto j : v) c[j] = M;
	}
	ll res = 0;
	for(ll i = 1; i <= m; i++) {
		string s;
		cin >> s;
		res += 1ll * c[d[s]];
	}
	cout << res << endl;
	return 0;
}