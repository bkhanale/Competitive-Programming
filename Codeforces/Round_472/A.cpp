#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

ll ans = 0;

void fun(string s, string k, ll i) {
	if(ans >= 2) {
		return;
	}
	if(i == s.length()) {
		for(ll j = 0; j < k.length(); j++) {
			if(j > 0 && k[j] == k[j - 1]) {
				return;
			}
		}
		ans++;
		if(ans >= 2) {
			return;
		}
		return;
	}
	if(s[i] == '?') {
		fun(s, k + 'C', i + 1);
		fun(s, k + 'M', i + 1);
		fun(s, k + 'Y', i + 1);
	} else {
		fun(s, k + s[i], i + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, cnt = 0;
	cin >> n;
	string s;
	cin >> s;
	fun(s, "", 0);
	if(ans >= 2) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}