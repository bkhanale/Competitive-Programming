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
	ll n, k, i, j;
	cin >> n >> k;
	ll a[n + 1], p[n + 1], s[n + 2], sum[n + 1], t[n + 1];
	p[0] = 0; s[n + 1] = 0; sum[0] = 0;
	for(i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(i = 1; i <= n; i++) {
		cin >> t[i];
	}
	for(i = 1; i <= n; i++) {
		p[i] = p[i - 1] + t[i] * a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	for(i = n; i >= 1; i--) {
		s[i] = s[i + 1] + t[i] * a[i];
	}
	ll ans = 0;
	for(i = 1; i + k - 1 <= n; i++) {
		ans = max(ans, p[i - 1] + s[i + k] + sum[i + k - 1] - sum[i - 1]);
	}
	cout << ans << endl;
	return 0;
}