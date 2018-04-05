#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "r", stdin);
	ll n;
	cin >> n;
	ll p[n];
	for(ll i = 0; i < n - 1; i++) {
		cin >> p[i];
	}
	ll cnt = 0, app_time[100005], j, i = 0, k = 0, ans = 1, maxk = 0;
	while(k <= max(n - 2, maxk)) {
		cout << "i = " << i << endl;
		if(i < n - 1) {
			cnt = 1;
			for(j = i + 1; j < n - 1; j++) {
				if(p[j] != p[i]) {
					break;
				} else {
					cnt++;
				}
			}
			cout << "j = " << j << endl;
			maxk = max(p[i] + k - 1, maxk);
			app_time[p[i] + k - 1] += cnt;
			i = j;
		}
		cout << "cnt = " << cnt << " k = " << k << " maxk = " << maxk << endl;
		ans += app_time[k] % 2; k++;
	}
	for(ll i = k + 1; i <= maxk; i++) {
		ans += app_time[i] % 2;
	}
	for(ll i = 0; i <= maxk; i++) {
		cout << app_time[i] << " ";
	}
	cout << endl;
	cout << ans << endl;
	return 0;
}