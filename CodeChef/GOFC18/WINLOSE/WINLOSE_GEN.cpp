#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "w", stdout);
	int t = 999;
	cout << t << endl;
	while(t--) {
		long n = (rand() % 1000000);
		for(long i = 0; i < n; i++) {
			cout << rand() % 2;
		}
		cout << endl;
	}
	return 0;
}