#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
	int len = s.length();
	for(int i = 0; i < len / 2; i++) {
		string n_s = s.substr(0, i + 1);
		long long num = 0, n_len = n_s.length();
		num = stol(n_s);
		while(n_s.length() < len) {
			num++;
			n_s = n_s + to_string(num);
		}
		if(n_s == s) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	//freopen("input2.txt", "r", stdin);
	//freopen("output2.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		solve(s);
	}
	return 0;
}