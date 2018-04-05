#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output22.txt", "w", stdout);
	ll t;
	cin >> t;
	while(t--) {
		ll k, n;
		cin >> k >> n;
		string s;
		cin >> s;
		ll h_i = k / 2, t_i = k / 2, h_f = 0, t_f = 0;
		for(ll i = 0; i < s.length(); i++) {
			if(s[i] == 'h') {
				h_f++;
			}else{
				t_f++;
			}
		}
		ll ans = 0;
		if(h_i % 2 == 0) {
			if((n - 1) % 2 == 0) {
				if(h_f % 2 == 0) {
					ans = 1;
				} else {
					ans = 0;
				}
			} else {
				if(h_f % 2 == 0) {
					ans = 0;
				} else {
					ans = 1;
				}
			}
		} else {
			if((n - 1) % 2 == 0) {
				if(h_f % 2 == 0) {
					ans = 0;
				} else {
					ans = 1;
				}
			} else {
				if(h_f % 2 == 0) {
					ans = 1;
				} else {
					ans = 0;
				}
			}
		}
		if(ans == 0) {
			cout << "Head\n";
		} else {
			cout << "Tail\n";
		}
	}
	return 0;
}