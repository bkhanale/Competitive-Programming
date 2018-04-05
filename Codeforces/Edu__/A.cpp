#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll neg = 0, pos = 0;
	for(ll i = 0; i < n; i++) {
		if (a[i] < 0) {
			neg += a[i];
		}
		else if (a[i] > 0) {
			pos += a[i];
		}
	}
	cout << pos-neg << endl;
	return 0;
}