#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll M = 111111;

ll a[M], c[M];

int main() {
	ll n, m;
	cin >> n >> m;
	vector<ll> v[M], g[M], ans[M];
	for(ll i = 1; i <= n; i++) {
		ll x, y;
		cin >> a[i];
		for(ll j = 0; j < a[i]; j++) {
			cin >> y; v[i].push_back(y); g[y].push_back(i);
		}
	}

	for(ll i = 1; i <= n; i++) {
		if(!a[i]) {
			c[i] = 2; ans[i].push_back(i);
		}
	}

	while(1) {
		ll cnt = 0;
		for(ll i = 1; i <= n; i++) {
			if(c[i] == 2) {
				for(auto k : g[i]) {
					if(!c[k]) {
						c[k] = 1, cnt++;
						ans[k].push_back(k);
						for(auto j : ans[i]) {
							ans[k].push_back(j);
						}
					}
				}
			}
		}
		for(ll i = 1; i <= n; i++) {
			if(c[i] == 1) {
				for(auto k : g[i]) {
					if(a[k] == 1 && !c[k]) {
						c[k] = 2, cnt++;
						ans[k].push_back(k);
						for(auto j : ans[i]) {
							ans[k].push_back(j);
						}
					}
				}
			}
		}
		if(!cnt) break;
	}
	ll x;
	cin >> x;
	if(!c[x]) {
		cout << "Draw" << endl;
	}
	else if(c[x] == 1) {
		cout << "Win" << endl;
		for(auto k : ans[x]) {
			cout << k << " ";
		}
		cout << endl;
	} else {
		cout << "Lose" << endl;
	}
	return 0;
}