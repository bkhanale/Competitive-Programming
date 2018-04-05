#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define MAX 505

ll n, m, k;
ll bhu[MAX][MAX];
ll bhush[MAX][MAX];
ll bhushan[MAX][MAX][MAX];

ll dp(ll cD, ll cH, ll k) {
	if(cD == n || cD == m || k == 0) {
		return 0;
	}
	if(bhushan[cD][cH][k] != -1) {
		return bhushan[cD][cH][k];
	}
	ll sD = dp(cD + 1, 0, k);
	ll takeHour = bhu[cD][cH] == 1 ? dp(cD, cH + 1, k - 1) + bhush[cD][cH] : dp(cD, cH + 1, k);
	ll ret = max(sD, takeHour);
	return bhushan[cD][cH][k] = ret;
}

int main() {
	cin >> n >> m >> k;
	ll tt = 0;
	for(ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		for(ll j = 0; j < s.size(); j++) {
			bhu[i][j] = s[j] - '0';
		}
	}
	for(ll d = 0; d < n; d++) {
		ll lh = -1, fh = -1;
		for(ll hr = m - 1; hr >= 0; hr--) {
			if(bhu[d][hr] == 1) {
				lh = hr;
				break;
			}
		}
		if(lh < 0) {
			continue;
		}
		for(ll hr = 0; hr < m; hr++) {
			if(bhu[d][hr] == 1) {
				fh = hr;
				break;
			}
		}
		tt += lh - fh + 1;
		bhush[d][lh] = 1;
		ll acc = 0;
		for(ll hr = lh - 1; hr >= 0; hr--) {
			if(bhu[d][hr]) {
				bhush[d][hr] = acc + 1;
				acc = 0;
			} else {
				acc++;
			}
		}
	}
	//memset(bhushan, -1, sizeof(bhushan));
	cout << tt - dp(0, 0, k) << endl;
	return 0;
}