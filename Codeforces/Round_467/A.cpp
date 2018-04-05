#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	ll cnt = 0, chk = 0;
	for(ll i = 0; i < n; i++) {
		if(a[i] != 0 && a[i] != chk) {
			cnt++;
			chk = a[i];
		}
	}
	cout << cnt << endl;
	return 0;
}