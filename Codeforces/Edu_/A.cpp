#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool vowel(char a) {
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y') {
		return true;
	}
	return false;
}

int main() {
	ll n, cnt = 0, it = 0;
	cin >> n;
	string s, str = "";
	cin >> s;
	for(ll i = 0; i < n; i++) {
		char a = s[i];
		if(vowel(a) && (cnt == 1)) {
			continue;
		}
		if(vowel(a) && (cnt == 0)) {
			cnt = 1;
			str += a;
		} else {
			cnt = 0;
			str += a;
		}
	}
	cout << str << endl;
	return 0;
}