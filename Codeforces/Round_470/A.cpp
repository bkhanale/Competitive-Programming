#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll r, c;
	cin >> r >> c;
	char ch[r][c];
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++) {
			cin >> ch[i][j];
		}
	}
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++) {
			if(ch[i][j] == 'S') {
				if(ch[i - 1][j] == 'W' || ch[i + 1][j] == 'W' || ch[i][j - 1] == 'W' || ch[i][j + 1] == 'W') {
					cout << "No" << endl;
					return 0;
				} else {
					if(j > 0 && ch[i][j - 1] == '.') {
						ch[i][j - 1] = 'D';
					}
					if(i > 0 && ch[i - 1][j] == '.') {
						ch[i - 1][j] = 'D';
					}
					if(i < r - 1 && ch[i + 1][j] == '.') {
						ch[i + 1][j] = 'D';
					}
					if(j < c - 1 && ch[i][j + 1] == '.') {
						ch[i][j + 1] = 'D';
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++) {
			cout << ch[i][j];
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}