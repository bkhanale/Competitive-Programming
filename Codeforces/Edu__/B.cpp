#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main() {
	ll n, m, x;
	cin >> n >> m;
	while(true) {
		if(n == 0 || m == 0) {
			break;
		}
		if(n >= 2 * m) {
			x = n / m; x -= x % 2; n -= x * m;
			continue;
		}
		else if(m >= 2 * n) {
			x = m / n; x -= x % 2; m -= x * n;
			continue;
		}
		else {
			break;
		}
	}
	cout << n << " " << m << endl;
	return 0;
}