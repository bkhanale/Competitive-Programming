#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sch(ll &sum, ll x, ll l, ll r, ll n) {
	ll m = l + (r - l) / 2;
	if(m == l) {
		m++;
	}
	ll tp = n * (n + 1) / 2; tp -= m * (m - 1) / 2;
	if(x >= m) {
		tp -= x;
	}
	tp = sum - tp;
	if(l == r) {
		sum = tp;
		return l;
	}
	if(tp >= 0 && tp < m) {
		sum = tp; 
		return m - 1;
	}
	if(tp < 0) {
		return sch(sum, x, m, r, n);
	}
	if(tp >= m) {
		return sch(sum, x, l, m, n);
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	ll t;
	cin >> t;
	while(t--) {
		ll x, n;
		cin >> x >> n;
		ll sum = (n * (n + 1) / 2) - x;
		if(sum % 2 != 0) {
			cout << "impossible\n";
		}
		else {
			sum /= 2;
			char ans[n]; ans[n] = '\0'; fill(ans, ans+n, 48);
			ll cur = sch(sum, x, 1, n, n);
			fill(ans + cur, ans + n, 49); ans[x - 1] = '2'; string s = ans;
			if(cur == x) {
				cur--;
			}
			if(sum == x) {
				if(x < 3) {
					if(cur - x < 2) {
						cout << "impossible\n";
					}
					else {
						s.at(cur) = '0'; s.at(cur - 1) = '1'; s.at(x) = '1';
						cout << s << endl;
					}
				}
				else {
					s.at(x - 2) = '1'; s.at(0) = '1';
					cout << s << endl;
				}
			}
			else {
				if(sum > 0) {
					s.at(sum - 1) = '1';
				}
				cout << s << endl;
			}
		}
	}
	return 0;
}