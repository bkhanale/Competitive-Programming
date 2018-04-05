#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100001];

int main() {
	ll n;
	cin >> n;
	bool ab = false;
	ll mx = -1, c = 0;
	for(ll i = 0; i < n; i++) {
		ll num;
		cin >> num;
		a[num]++;
	}
	for(ll i = 0; i < 100001; i++) {
		if(a[i] % 2 == 1) {
			cout << "Conan\n";
			return 0;
		}
	}
	cout << "Agasa\n";
	return 0;
}