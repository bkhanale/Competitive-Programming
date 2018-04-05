#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	//freopen("input.txt", "r", stdin);
	ll n;
	cin >> n;
	ll h[n];
	for(ll i = 0; i < n; i++) {
		cin >> h[i];
	}
	ll q, cnt = n;
	cin >> q;
	while(q--) {
		ll x, y;
		cin >> x >> y;
		for(ll i = 0; i < n; i++) {
			if((i & x) == i && h[i] > 0) {
				h[i] -= y;
				if(h[i] <= 0) {
					cnt--;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}