#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, q;
	cin >> n >> q; ll a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	while(q--) {
		ll l, r, m = 1;
		cin >> l >> r; l--; r--;
		for(ll i = l; i <= r; i++) {
			m *= a[i];
		}
		cout <<"hi1";
		ll gcd[n], j = 0, ans = 0;
		for(ll i = l; i <= r; i++) {
			gcd[j++] = __gcd(m / a[i], a[i]);
		}
		cout << "hi2";
		for(ll i = 0; i < j; j++) {
			ans = max(ans, gcd[i]);
		}
		cout << ans << endl;
	}
	return 0;
}