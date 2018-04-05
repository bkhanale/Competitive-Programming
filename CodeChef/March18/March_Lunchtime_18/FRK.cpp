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
	ll n, cnt = 0;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		if(s.length() < 2) {
			continue;
		}
		for(ll i = 0; i < s.length() - 1; i++) {
			if(s[i] == 'c' && s[i + 1] == 'h') {
				cnt++; break;
			}
			else if(s[i] == 'h' && s[i + 1] == 'e') {
				cnt++; break;
			}
			else if(s[i] == 'e' && s[i + 1] == 'f') {
				cnt++; break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}