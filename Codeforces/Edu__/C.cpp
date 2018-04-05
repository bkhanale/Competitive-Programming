#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	string s;
	cin >> s;
	char ch = 'a';
	for(ll i = 0; i < s.size(); i++) {
		if(s[i] == ch) {
			ch++;
		} else {
			if(s[i] < ch) {
				s[i] = ch;
				ch++;
			}
		}
		if(ch > 'z') {
			break;
		}
	}
	if(ch > 'z') {
		cout << s << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}