#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		long n = s.length(), ma = 0, ta = 0, cnta = 0, cntb = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				ta += 5;
				cnta++;
				cntb = 0;
			}
			else if(s[i] == '0') {
				ma += 5;
				cntb++;
				cnta = 0;
			}
			if(cnta == 5) {
				ta += 10;
				ma -= 5;
			}
			else if(cntb == 5) {
				ma += 10;
				ta -= 5;
			}
		}
		if(ta == ma) {
			cout << "Draw\n";
		}
		else if(ta > ma) {
			cout << "Tanu\n";
		}
		else if(ta < ma) {
			cout << "Manu\n";
		}
	}
	return 0;
}