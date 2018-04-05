#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MAX = 1e6;
ll pmax[MAX + 1];

int main() {
	ll n;
	cin >> n;
	for(ll k = 2; k <= MAX; k++) {
		if(pmax[k] == 0) {
			for(ll j = k; j <= MAX; j += k) {
				pmax[j] = k;
			}
		}
	}
	ll Min = n, N = n, x1;
	for(ll p = 2; p * p <= n; p++) {
		if(n % p == 0) {
			for(ll k = 1; k <= p; k++) {
				x1 = N - p + k;
				if(x1 > 3 and x1 != pmax[x1]) {
					Min = min(Min, x1 - pmax[x1] + 1);
				}
			}
			while(n % p == 0) {
				n /= p;
			}
		}
	}
	if(n > 1) {
		ll p = n;
		for(ll k = 1; k <= p; k++) {
			x1 = N - p + k;
			if(x1 > 3 and x1 != pmax[x1]) {
				Min = min(Min, x1 - pmax[x1] + 1);
			}
		}
	}
	cout << Min << endl;
	return 0;
}