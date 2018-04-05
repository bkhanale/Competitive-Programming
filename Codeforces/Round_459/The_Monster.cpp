#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	ll len = s.length(), cntq = cntbo = cntbc = 0;
	vector<ll> bo, bc; 
	for(ll i = 0; i < len; i++) {
		if(s[i] == '?') {
			bo.push_back(cntbo);
		}
		else if(s[i] == '(') {
			cntbo++;
		}
	}
	for(ll i = len - 1; i >= 0; i--) {
		if(s[i] == '?') {
			bc.insert(cntbc);
		}
		else if(s[i] == ')') {
			cntbc++;
		}
	}
	return 0;
}