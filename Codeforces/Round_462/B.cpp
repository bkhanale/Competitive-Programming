#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll k;
	cin >> k;
	if(k > 32) {
		cout << -1 << endl;
	} else {
		while(k % 2 == 0 && k > 0) {
			cout << 8;
			k -= 2;
		}
		while(k % 2 != 0 && k > 1) {
			cout << 8;
			k -= 2;
		}
		if(k == 1) cout << 9;
		cout << endl;
	}
	return 0;
}