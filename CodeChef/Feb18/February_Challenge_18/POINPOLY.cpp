#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

struct point {
	ll x, y;
	point() {}
	point(ll x, ll y) {
		this -> x = x;
		this -> y = y;
	}
};

typedef vector<point> polygon;
1
int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, xm = 0, ym = 0, nx = INT_MAX, ny = INT_MAX;
		cin >> n;
		polygon p;
		for(ll i = 0; i < n; i++) {
			ll xi, yi;
			cin >> xi >> yi;
			xm = max(xm, xi); ym = max(ym, yi);
			nx = min(nx, xi); ny = min(ny, yi);
			p.pb(point(xi, yi));
		}
		for(ll i = ny + 1; i <= ym - 1; i++) {
			for(ll j = x)
		}
	}
	return 0;
}