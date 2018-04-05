#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

double res;
ll n, u, e[MAX];
bool bhu;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, u;
	cin >> n >> u;
	for(ll i = 1; i <= n; i++) {
		cin >> e[i];
	}
	res = -1; bhu = false;
	for(ll i = 1; i <= n - 2; i++) {
		ll low = i + 2, high = n, tp = -1, mid;
		while(low <= high) {
			mid = (low + high) >> 1;
			if(e[mid] - e[i] <= u) {
				tp = mid; low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		if(tp != -1) {
			double nw = (1.0 * (e[tp] - e[i + 1])) / (1.0 * (e[tp] - e[i]));
			if(nw > res) {
				res = nw; bhu = true;
			}
		}
	}
	if(!bhu) {
		cout << "-1" << endl;
	} else {
		cout << fixed << setprecision(18) << res << endl;
	}
	return 0;
}