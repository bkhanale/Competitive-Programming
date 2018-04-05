#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

vector<pair<ll, ll> > t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s; t.resize(4); ll n; cin >> n;
	for(ll i = 0; i < 4; i++) {
		ll ans = 0;
		for(ll j = 0; j < n; j++) {
			cin >> s;
			for(ll k = 0; k < s.size(); k++) {
				if((j * n + k) % 2 == s[k] - '0') {
					ans++;
				}
			}
		}
		t[i].first = ans; t[i].second = n * n - ans;
	}
	sort(t.begin(), t.end());
	ll s2 = t[0].first + t[1].first + t[2].first + t[2].second + t[3].second; ll res = s2;
	do {
		s2 = t[0].first + t[1].first + t[2].first + t[2].second + t[3].second; res = min(s2, res);
	} while (next_permutation(t.begin(), t.end()));
	s2 = t[0].first + t[1].first + t[2].second + t[3].second; res = min(res, s2);
	cout << res << endl;
	return 0;
}