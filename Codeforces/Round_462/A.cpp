#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n, m;
	cin >> n >> m;
	ll a[n], b[m];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(ll i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	cout << max(a[1] * b[0], a[n-2] * b[m-1]) << endl; 
	return 0;
}