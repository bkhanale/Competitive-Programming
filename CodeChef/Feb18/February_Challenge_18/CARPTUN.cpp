#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100005];

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		for(ll i = 1; i <= n; i++) {
			cin >> a[i];
		}
		ll c, d, s, mx = 0;
		cin >> c >> d >> s;
		for(ll i = 1; i <= n; i++) {
			mx = max(mx, a[i]);
		}
		cout << 1ll * mx * (c - 1) << endl;
	}
	return 0;
}