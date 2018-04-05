#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n, m;
	cin >> n >> m;
	ll x[n], y[m];
	for(ll i = 0; i < n; i++) {
		cin >> x[i];
	}
	for(ll i = 0; i < m; i++) {
		cin >> y[i];
	}
	ll i = 0; j = 0, sx = 0, sy = 0;
	while(i < n && j < m) {
		if(sx == sy) {
			sx = 0; sy = 0;
		}
	}
	return 0;
}