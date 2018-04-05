#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	vector<pair<ll, ll> > a(n);
	for(ll i = 0; i < n; i++) {
		cin >> a[i].first;
	}
	for(ll j = 0; j < n; j++) {
		cin >> a[j].second;
	}
	vector<ll> vec(n);
	for(ll i = 0; i < n; i++) {
		for(ll j = i; j < n; j++) {
			if(a[i].first) {
				vec[j] += min(a[i].first, a[j].second);
				a[i].first -= min(a[i].first, a[j].second);
			} else {
				break;
			}
		}
	}
	for(ll i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}
	return 0;
}