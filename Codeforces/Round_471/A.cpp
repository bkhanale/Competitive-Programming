#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll hh, mm;
	cin >> hh >> mm;
	ll h, d, c, n;
	cin >> h >> d >> c >> n;
	double cbef8; ll till8;
	if(hh < 20) {
		till8 = h + d * ((20 - hh - 1) * 60 + (60 - mm));
		ll tp;
		if(till8 % n == 0) {
			tp = till8 / n;
		} else {
			tp = till8 / n + 1;
		}
		cbef8 = c * tp * 0.80;
	} else {
		if(h % n == 0) {
			cbef8 = 0.80 * c * (h / n);
		} else {
			cbef8 = 0.80 * c * (h / n + 1);
		}
	}
	ll cst;
	if(h % n == 0) {
		cst = c * h / n;
	} else {
		cst = c * (h / n + 1);
	}
	if(cbef8 < cst) {
		cout << fixed << setprecision(18) << cbef8 << endl;
	} else {
		cout << cst << endl;
	}
	return 0;
}