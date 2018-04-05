#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100005

ll a[MAX], ans[MAX];

void fun(ll n) {
	ll sel = 0, m = 0, ps;
	vector<ll> v;
	v.push_back(0);
	for(ll i = 1; i < n - 1; i++) {
		sel += a[i]; v.push_back(sel);
	}
	for(ll i = 0; i < n - 1; i++) {
		ans[i + 1] += 1;
		if(i) {
			m += a[i];
		}
		ps = upper_bound(v.begin() + i, v.end(), m + a[i]) - v.begin();
		ans[ps + 1] += -1;
	}
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll bhus[n + 1], b[n + 1], bhu[n + 1];
		for(ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(ll i = 0; i <= n; i++) {
			ans[i] = 0; bhus[i] = 0; b[i] = 0;
		}
		fun(n);
		for(ll i = 1; i < n; i++) {
			ans[i] += ans[i - 1];
		}
		for(ll i = 0; i < n; i++) {
			bhus[i] = ans[i]; ans[i] = 0; b[i] = a[n - i - 1];
		}
		for(ll i = 0; i < n; i++) {
			a[i] = b[i];
		}
		fun(n);
		for(ll i = 1; i < n; i++) {
			ans[i] += ans[i - 1];
		}
		for(ll i = 0; i < n; i++) {
			bhu[i] = bhus[i] + ans[n - i - 1];
		}
		for(ll i = 0; i < n; i++) {
			cout << bhu[i] << " ";
		}
		cout << endl;
	}
	return 0;
}