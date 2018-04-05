#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	cin >> s;
	ll n = s.length();
	if(n < 4) {
		cout << "No" << endl;
	} else {
		sort(s.begin(), s.end());
		vector<ll> v; ll cnt = 1, j = 1;
		for(ll i = 1; i < n; i++) {
			if(s[i] == s[i - 1]) {
				cnt++;
			} else {
				j++;
				v.push_back(cnt);
				cnt = 1;
			}
		}
		v.push_back(cnt);
		if(j > 4 || j < 2) {
			cout << "No" << endl;
		} else {
			if(j == 2) {
				for(ll i = 0; i < v.size(); i++) {
					if(v[i] < 2) {
						cout << "No" << endl;
						return 0;
					}
				}
				cout << "Yes" << endl;
				return 0;
			}
			else if(j == 3) {
				ll ct = 0;
				for(ll i = 0; i < v.size(); i++) {
					if(v[i] >= 2) {
						ct++;
					}
				}
				if(ct < 1) {
					cout << "No" << endl;
				} else {
					cout << "Yes" << endl;
				}
				return 0;
			}
			else if(j == 4) {
				cout << "Yes" << endl;
			}
		}
	}
	return 0;
}