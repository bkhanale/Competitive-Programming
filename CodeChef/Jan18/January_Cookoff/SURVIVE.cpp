#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, k, s;
		cin >> n >> k >> s;
		if(k * min(7ll, s) > n * 6) {
			cout << -1 << endl;
		} else {
			ll ans = (k * s) / n;
			if((k * s) % n != 0) {
				ans++;
			}
			cout << ans << endl;
		}
	}
	return 0;
}