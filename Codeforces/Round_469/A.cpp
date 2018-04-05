#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll l, r, a;
	cin >> l >> r >> a;
	for(ll i = 1; i <= a; i++) {
		if(l < r) {
			l++;
		} else {
			r++;
		}
	}
	cout << 2 * min(l, r) << endl;
	return 0;
}