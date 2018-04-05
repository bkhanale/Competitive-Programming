#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "w", stdout);
	ll t = 999;
	cout << t << endl;
	while(t--) {
		ll n = rand() % 99998 + 2;
		ll k = rand() % 99998 + 2;
		if(k % 2 != 0) {
			k++;
		}
		cout << n << " " << k << endl;
		string s = "";
		for(ll i = 0; i < k - 1; i++) {
			ll rnd = rand() % 2;
			if(rnd == 0) {
				s += 'h';
			}else {
				s += 't';
			}
		}
		cout << s << endl;
	}
	return 0;
}