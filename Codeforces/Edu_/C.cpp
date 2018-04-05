#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> vv;

void fun(ll x) {
	vv.clear();
	for(ll i = 1; i * i <= x; i++) {
		if(x % i == 0) {
			vv.push_back(i);
			vv.push_back(x / i);
		}
	}
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll x;
		cin >> x;
		if(x == 0) {
			cout << "1 1" << endl;
			continue;
		}
		if(x == 1) {
			cout << "-1" << endl;
			continue;
		}
		fun(x);
		bool ans = false; ll z = vv.size();
		ll a, b, n, m;
		for(ll i = 0; i < z; i++) {
			a = vv[i]; b = x / a;
			if(a < b) {
				swap(a, b);
			}
			ll d = a - b; d /= 2;
			if(d == 0) {
				continue;
			}
			n = a - d; m = n / d;
			ll r = n / m;
			if(n * n - r * r == x) {
				ans = true;
				break;
			}
		}
		if(ans) {
			cout << n << " " << m << endl;
		} else {
			cout << "-1" << endl;
		}
	}
	return 0;
}