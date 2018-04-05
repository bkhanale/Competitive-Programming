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
	ll n;
	cin >> n;
	ll ans = 0ll;
	for(ll i = 1; (1ll << (i - 1)) <= n; i++) {
		ans += (n / (1ll << i)) * (1ll << (i - 1));
		if((n % (1ll << i)) > (1ll << (i - 1))) {
			ans += (1ll << (i - 1));
		}
	}
	cout << ans << endl;
	return 0;
}