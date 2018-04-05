#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "r", stdin);
	ll n;
	cin >> n;
	ll x[n];
	vector<ll> v;
	for(ll i = 0; i < n; i++) {
		cin >> x[i];
	}
	sort(x, x + n);
	ll cnt = 1;
	for(ll i = 1; i < n; i++) {
		if(x[i] != x[i - 1]) {
			v.push_back(cnt);
			cnt = 1;
		} else {
			cnt++;
		}
	}
	for(ll i = 0; i < v.size(); i++) {
		
	}
	return 0;
}