#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fq[1234], pptr[100005], rev[100005];

int main() {
	ll t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(ll i = 0; i < 1234; i++) {
			fq[i] = 0;
		}
		for(ll i = 0; i < s.length(); i++) {
			fq[s[i]]++;
		}
		ll od = 0;
		for(ll i = 0; i < 333; i++) {
			if(fq[i] & 1) {
				od++;
			}
		}
		if(od > 1) {
			cout << "-1" << endl;
			continue;
		}
		if(od == 0) {
			od -= 1;
		} else {
			for(ll i = 0; i < 333; i++) {
				if(fq[i] & 1) {
					od = i;
				}
			}
		}
		vector<ll> pos[333]; ll ptr = 0, odpos;
		for(ll i = 0; i < 333; i++) {
			for(ll j = 0; j < fq[i] / 2; j++) {
				pos[i].push_back(++ptr);
			}
		}
		if(od != -1) {
			odpos = ++ptr;
		}
		for(ll i = 321; i >= 0; --i) {
			for(ll j = 0; j < fq[i] / 2; j++) {
				pos[i].push_back(++ptr);
			}
		}
		ll nw[333] = {0}, pp = 0;
		for(ll i = 0; i < s.length(); i++) {
			if(s[i] == od) {
				pptr[++pp] = odpos, od = -1;
				continue;
			}
			pptr[++pp] = pos[s[i]][nw[s[i]]];
			++nw[s[i]];
		}
		for(ll i = 1; i <= s.size(); i++) {
			rev[pptr[i]] = i;
		}
		for(ll i = 1; i <= s.size(); i++) {
			cout << rev[i] << " \n"[i == s.size()];
		}
	}
	return 0;
}