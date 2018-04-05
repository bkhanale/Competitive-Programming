#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const double eps = 1e-12;

ll k, d, t;
double ans;

ll fun(double x) {
	if(fabs(x) < eps) {
		return 0;
	}
	if(x > eps) {
		return 1;
	}
	if(x < -eps) {
		return -1;
	}
}

int main() {
	cin >> k >> d >> t;
	ll TTT = ((k - 1) / d + 1) * d, T1 = k, T2 = TTT - k;
	double ttl = T1 * 1.0 / t + T2 * 0.5 / t;
	ll CS = floor(1 / ttl);
	if(fun(CS * ttl - 1) >= 0) {
		ans = TTT * CS;
	} else {
		ans = TTT * CS;
		if(fun(k * 1.0 / t - (1 - CS * ttl)) >= 0) {
			ans += (1 - CS * ttl) / (1.0 / t);
		} else {
			ans += k;
			ans += (1 - CS * ttl - k * 1.0 / t) / (0.5 / t);
		}
	}
	printf("%.9lf\n", ans);
	return 0;
}