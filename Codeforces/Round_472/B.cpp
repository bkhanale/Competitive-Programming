#include <bits/stdc++.h>
using namespace std;
#define MAX 101
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

ll n, m;
ll a[MAX][MAX];
string s;
bool chk[MAX], bhu;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, m;
	cin >> n >> m;
	for(ll i = 1; i <= n; i++) {
		cin >> s;
		for(ll j = 0; j < s.length(); j++) {
			a[i][j + 1] = s[j];
		}
	}
	bhu = true; memset(chk, false, sizeof(chk));
	for(ll i = 1; i <= n; i++) {
		if(!chk[i]) {
			chk[i] = true; vector<ll> v; v.clear();
			for(ll j = 1; j <= m; j++) {
				if(a[i][j] == '#') {
					for(ll k = i + 1; k <= n; k++) {
						if(a[k][j] == '#') {
							v.pb(k);
						}
					}
				}
			}
			for(ll k = 0; k < v.size(); k++) {
				for(ll j = 1; j <= m; j++) {
					if(a[i][j] != a[v[k]][j]) {
						cout << "No" << endl;
						return 0;
					}
				}
				chk[v[k]] = true;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}