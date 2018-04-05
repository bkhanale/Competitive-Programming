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
	ll n, m;
	cin >> n >> m;
	ll c, fi[MAX];
	for(ll i = 0; i < n; i++) {
		fi[i] = 0;
	}
	for(ll i = 0; i < m; i++) {
		cin >> c;
		fi[c - 1]++;
	}
	sort(fi, fi + n);
	cout << fi[0] << endl;
	return 0;
}