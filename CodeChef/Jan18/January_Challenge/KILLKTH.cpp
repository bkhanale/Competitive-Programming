#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<string> subs(string s) {
	vector<string> a;
	for(ll i = 0; i < s.length(); i++) {
		string sb = "";
		sb += s[i];
		a.push_back(sb);
		for(ll j = i + 1; j < s.length(); j++) {
			sb += s[j];
			a.push_back(sb);
		}
	}
	sort(a.begin(), a.end());
	return a;
}

int main() {
	//freopen("input.txt", "r", stdin);
	string s, sb = "";
	cin >> s;
	vector<string> a = subs(s);
	for(ll i = 0; i < a.size(); i++) {
		sb += a[i];
	}
	ll q, g = 0;
	cin >> q;
	while(q--) {
		ll p, m;
		cin >> p >> m;
		ll k = (((p % m) * (g % m)) % m) + 1;
		char ch = sb[k - 1];
		cout << ch << endl;
		g += ch;
	}
	return 0;
}