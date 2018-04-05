#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin >> t;
	while(t--) {
		string s, t;
		cin >> s;
		for(ll i = 0; i < s.length(); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') {
				t += s[i] - 'A' + 'a';
			}
			else if(s[i] >= 'a' && s[i] <= 'z') {
				t += s[i];
			}
		}
		string str("chef"); ll cnt = 0;
		for(ll i = 0; i < (ll)t.size() - 3; i++) {
			set<char> st;
			for(ll j = i; j < i + 4; j++) {
				st.insert(t[j]);
			}
			bool kk = 1;
			for(char ch : str) {
				if(st.find(ch) == st.end()) {
					kk = false;
					break;
				}
			}
			if(kk) cnt++;
		}
		if(cnt) {
			cout << "lovely " << cnt << endl;
		} else {
			cout << "normal" << endl;
		}
	}
	return 0;
}