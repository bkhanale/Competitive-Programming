#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "r", stdin);
	ll n, a, b;
	cin >> n >> a >> b;
	ll ma = a, mb = b, cnt = 0;
	while(ma != mb) {
		if(ma % 2 == 0) {
			ma /= 2;
		} else {
			ma = (ma + 1) / 2; 
		}
		if(mb % 2 == 0) {
			mb /= 2;
		} else {
			mb = (mb + 1) / 2; 
		}
		cnt++;
	}
	ll rnds = log2(n);
	if(cnt == rnds) {
		cout << "Final!" << endl;
	} else {
		cout << cnt << endl;
	}
	return 0;
}