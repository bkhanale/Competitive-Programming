#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++) {
		ll a1, a2, a3, a4, a5;
		cin >> a1 >> a2 >> a3 >> a4 >> a5;
		ll sum = a1 + a2 + a3 + a4 + a5;
		if(sum == 0) cout << "Beginner\n";
		if(sum == 1) cout << "Junior Developer\n";
		if(sum == 2) cout << "Middle Developer\n";
		if(sum == 3) cout << "Senior Developer\n";
		if(sum == 4) cout << "Hacker\n";
		if(sum == 5) cout << "Jeff Dean\n"; 
	}
	return 0;
}