#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define INF INT_MAX
typedef long long ll;

vector<ll> v, v1;
map<ll, ll> mp;
ll n, l, r;

ll fun(ll x) {
	ll l = 1, r = 1e9;
	while (l < r) {
		ll c = (l + r) / 2;
		if(c * c >= x) {
			r = c;
		}
		else {
			l = c + 1;
		}
	}
	return l;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n;
	for(ll i = 2; i <= MAX; i++) {
		ll now = ll(i) * ll(i), da = 1e18, da1 = i;
		while(now <= (da / da1)) {
			now *= i;
			ll kek = fun(now);
			if(kek * kek != now) {
				v1.push_back(now);
			}
		}
	}
	for (ll i = 0; i < v1.size(); i++) {
		if (mp[v1[i]] == 0){
			v.push_back(v1[i]); mp[v1[i]] = 1;
		}
	}
	sort(v.begin(), v.end());
	for (ll i = 1; i <= n; ++i) {
		cin >> l >> r;
		ll now1 = fun(l), now2 = fun(r);
		while(now2 * now2 > r) {
			now2--;
		}
		while(now1 * now1 < l) {
			now1++;
		}
		ll kol = now2 - now1 + 1, l1 = lower_bound(v.begin(), v.end(), l) - v.begin(), r1 = lower_bound(v.begin(), v.end(), r) - v.begin();
		cout << r1 - l1 + kol << endl;
	}
	return 0;
}