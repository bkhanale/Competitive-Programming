#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	//freopen("input.txt", "r", stdin);
	ll a, b;
	cin >> a >> b;
	ll dis = abs(a - b), j = 1, ans = 0;
	for(ll i = 1; i <= (dis + 1) / 2; i++) {
		ans += j; j++;
	}
	j = 1;
	for(ll i = ((dis + 1) / 2) + 1; i <= dis; i++) {
		ans += j; j++;
	}
	cout << ans << endl;
	return 0;
}