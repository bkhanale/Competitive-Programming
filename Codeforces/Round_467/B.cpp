#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll p, y;

bool fun(ll x) {
	bool ok = false; ll i;
	for(i = 2; i * i <= x; i++) {
		if(x % i == 0) {
			if(i <= p) {
				return false;
			}
			if(x / i <= p) {
				return false;
			}
			ok = true;
		}
	}
	if(i * i == x && i <= p) {
		return false;
	}
	if(ok == false && x <= p) {
		return false;
	}
	return true;
}

int main() {
	cin >> p >> y;
	while(!fun(y) && y >= p) {
		y--;
	}
	if(y < p) {
		cout << -1 << endl;
	} else {
		cout << y << endl;
	}
	return 0;
}