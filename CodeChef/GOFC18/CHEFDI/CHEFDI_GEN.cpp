#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	freopen("input.txt", "w", stdout);
	ll L = 99999;
	cout << L << endl;
	while(L--) {
		cout << rand() % 999999999 + 1 << " ";
	}
	cout << endl;
	return 0;
}