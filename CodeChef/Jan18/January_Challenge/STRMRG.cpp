#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string a, b, res1, res2;
ll n, m, t;

ll lcs() {
	ll x = res1.length(), y = res2.length();
	ll LCS[x+1][y+1];
	for(ll i = 0; i <= x; i++) {
		for(ll j = 0; j <= y; j++) {
			if(i == 0 || j == 0) {
				LCS[i][j] = 0;
			}
			else if(res1[i-1] == res2[j-1]) {
				LCS[i][j] = 1 + LCS[i-1][j-1];
			}
			else {
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
			}
		}
	}
	return (x + y - LCS[x][y]);
}

int main() {
	//freopen("input.txt", "r", stdin);
	cin >> t;
	while(t--) {
		cin >> n >> m;
		cin >> a >> b;
		res1 = ""; res2 = "";
		res1 += a[0]; res2 += b[0];
		for(ll i = 1; i < n; i++) {
			if(a[i] != a[i-1]) {
				res1 += a[i];
			}
		}
		for(ll i = 1; i < n; i++) {
			if(b[i] != b[i-1]) {
				res2 += b[i];
			}
		}
		cout << lcs() << endl;
	}
	return 0;
}