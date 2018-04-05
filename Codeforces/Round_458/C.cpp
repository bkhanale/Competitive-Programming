#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define N 1010
ll M = 1000000007;

ll a[N], c[N][N];

int main() {
	a[1] = 0; c[0][0] = 1;
	for(ll i = 2; i < N; i++) {
		ll tmp = i, x = 0;
		while(tmp > 0) {
			x += (tmp % 2); tmp /= 2;
		}
		a[i] = a[x] + 1;
	}
	for(ll i = 1; i < N; i++) {
		c[i][0] = 1;
		for(ll j = 1; j <= i; j++) {
			c[i][j] = (c[i - 1][j - 1] +c[i - 1][j]) % M;
		}
	}
	ll k, ans = 0, til = 0;
	string s;
	cin >> s >> k;
	ll len = s.length();
	if(k == 0) {
		cout << 1 << endl;
		return 0;
	}
	for(ll i = 0; i < len; i++) {
		ll l = (len - i - 1);
		if(s[i] == '1') {
			for(ll j = 0; j <= l; j++) {
				if(j + til == 0) {
					continue;
				}
				if(a[j + til] + 1 == k) {
					ans += c[l][j]; ans %= M;
				}
			}
			til++;
		}
	}
	if(a[til] + 1 == k) {
		ans++;
	}
	ans %= M;
	cout << ans << endl;
	return 0;
}