#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(ll i = 0; i < n; i++) {
		if(a[i] == '1') {
			cnt1++;
			if(st == 0) {
				cnt1--;
				ans.push_back(cnt1 + cnt2);
			}
		}
		else if(a[i] == '2') {
			cnt2++;
			if(st == 1) {
				st = 0;
			} else {
				st = 1;
			}
		}
	}
	return 0;
}