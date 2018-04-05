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
	ll t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k; ll a[n], sum = 0;
		for(ll i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		ll cnt = 0;
		for(ll i = 0; i < n; i++) {
			if(sum - a[i] < a[i] + k) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}