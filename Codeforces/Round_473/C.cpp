#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	if(n == 2) {
		cout << "-1\n1 2\n";
		return 0;
	}
	if(n < 6) {
		cout << "-1\n";
		for(ll i = 0; i < n - 1; i++) {
			cout << "1 " << 2 + i << "\n";
		}
		return 0;
	}
	cout << "1 2\n";
	cout << "1 3\n1 4\n2 5\n2 6\n";
	for(ll i = 7; i <= n; i++) {
		cout << "2 " << i << endl;
	}
	for(ll i = 0; i < n - 1; i++) {
		cout << "1 " << 2 + i << endl;
	}
	return 0;
}