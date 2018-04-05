#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n, m;
	cin >> n >> m;
	vector<string> names, ips;
	for(ll i = 0; i < n; i++) {
		string name, ip;
		cin >> name >> ip;
		ip += ';';
		names.push_back(name);
		ips.push_back(ip);
	}
	for(ll i = 0; i < m; i++) {
		string cmd, cmdip;
		cin >> cmd >> cmdip;
		for(ll j = 0; j < ips.size(); j++) {
			if(cmdip == ips[j]) {
				cout << cmd << " " << cmdip << " #" << names[j] << endl;
			}
		}
	}
	return 0;
}