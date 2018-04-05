#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef pair<ll, ll> pii;

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<pii> seg;
		for(ll i = 0; i < n; i++) {
			ll li, ri;
			cin >> li >> ri;
			seg.push_back(make_pair(li, ri));
		}
		ll q;
		cin >> q;
		while(q--) {
			ll m;
			cin >> m;
			ll x[m];
			for(ll i = 0; i < m; i++) {
				cin >> x[i];
			}
		}
	}
	return 0;
}