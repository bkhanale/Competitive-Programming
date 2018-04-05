#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll k, d0, d1;
		cin >> k >> d0 >> d1;
		ll sum = (d0 + d1) % 3;
		for(ll i = 2; i < k; i++) {
			sum += (i % 3);
			sum %= 3;
		}
		if(sum % 3 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}