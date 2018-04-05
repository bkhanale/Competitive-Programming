#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		long n, k;
		cin >> n >> k;
		long a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long l = 0, r = 0, ans = 0;
		while(r < n) {
			while(a[r] - a[l] > k) {
				l++;
			}
			if(r - l + 1 >= 3) {
				ans += ((r - l) * (r - l - 1)) / 2;
			}
			r++;
		}
		cout << ans << endl;
	}
	return 0;
}

