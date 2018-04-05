#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n, j1 = 5, j2 = 3;
	cin >> n;
	string name = "OOO";
	if(n == 1) {
		cout << "O\n";
	}
	else if(n == 2) {
		cout << "OO\n";
	}
	else if(n == 3) {
		cout << "OOO\n";
	} else {
		for(ll i = 3; i < n; i++) {
			if(i + 1 == j1) {
				name += 'O';
				ll temp = j2;
				j2 = j1;
				j1 += temp;
			} else {
				name += 'o';
			}
		}
		cout << name << endl;
	}
	return 0;
}