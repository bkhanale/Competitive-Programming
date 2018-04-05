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
	string s;
	cin >> s;
	ll cnt = 0;
	for(ll i = 0; i < n; i++) {
		if(s[i] == 'U') {
			if(i < n - 1) {
				if(s[i + 1] == 'R') {
					cnt++; i++;
				} else {
					cnt++;
				}
			} else {
				cnt++;
			}
		}
		else if(s[i] == 'R') {
			if(i < n - 1) {
				if(s[i + 1] == 'U') {
					cnt++; i++;
				} else {
					cnt++;
				}
			} else {
				cnt++;
			}
		}
		else {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}