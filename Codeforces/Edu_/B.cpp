#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v;
ll a[100005], cst[100005];

int main() {
	ll n;
	cin >> n;
	ll ini = 1, fin = 1000000;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(ll i = 0; i < n; i++) {
		cst[i] = min(abs(a[i] - ini), abs(fin - a[i]));
		v.push_back(cst[i]);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1] << endl;
	return 0;
}