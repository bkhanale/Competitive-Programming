#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, m, x, k;
		cin >> n >> m >> x >> k;
		string s;
		cin >> s;
		ll b1 = 1, b2 = 0, b3 = 2, b4 = 0;
		for(ll i = 0; i < s.length(); i++) {
			if(s[i] == 'E') {
				if(b3 > m) {
					continue;
				}
				++b4; --n;
				if(b4 >= x) {
					b4 = 0, b3 += 2;
				}
			}
			else if(s[i] == 'O') {
				if(b1 > m) {
					continue;
				}
				++b2; --n;
				if(b2 >= x) {
					b2 = 0, b1 += 2;
				}
			}
		}
		if(x == 0) {
			n = 1234567;
		}
		if(n <= 0) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}