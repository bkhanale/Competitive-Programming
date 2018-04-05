#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;

vll arr[1111111], wr;

vll merge(vll a, vll b) {
	vll c; ll t = 0, i = 0, j = 0;
	while(true) {
		if(a.size() == 0 || b.size() == 0) {
			break;
		}
		if(a[i] >= b[j]) {
			c.push_back(a[i]); i++;
		} else {
			c.push_back(b[j]); j++;
		}
		t++;
		if(t == 50 || i == a.size() || j == b.size()) {
			break;
		}
	}
	if(t != 50) {
		if(i == a.size() && j != b.size()) {
			while(true) {
				c.push_back(b[j]); j++; t++;
				if(t == 50 || j == b.size()) {
					break;
				}
			}
		}
		else if(i != a.size() && j == b.size()) {
			while(true) {
				c.push_back(a[i]); i++; t++;
				if(t == 50 || i == a.size()) {
					break;
				}
			}
		}
	}
	return c;
}

vll build(ll x, ll st, ll ed) {
	if(st == ed) {
		arr[x].push_back(wr[ed]);
		return arr[x];
	}
	ll md = (st + ed) / 2;
	vll a1, a2; a1 = build(2 * x, st, md); a2 = build(2 * x + 1, md + 1, ed);
	vll u = merge(a1, a2); arr[x] = u;
	return arr[x];
}

vll update(ll x, ll st, ll ed, ll ps, ll vlu) {
	vll a1, a2; ll md = (st + ed) / 2;
	if(st == ed && st == ps) {
		wr[st] = vlu; arr[x].clear();
		arr[x].push_back(wr[st]);
		return arr[x];
	} else {
		if(md >= ps) {
			a1 = update(2 * x, st, md, ps, vlu);
			arr[x] = merge(a1, arr[2 * x + 1]);
		} else {
			a2 = update(2 * x + 1, md + 1, ed, ps, vlu);
			arr[x] = merge(arr[2 * x], a2);
		}
		return arr[x];
	}
}

vll query(ll x, ll st, ll ed, ll qst, ll qed) {
	ll md = (st + ed) / 2; vll c;
	if(qst > ed || qed < st) {
		return c;
	}
	if(st >= qst && qed >= ed) {
		return arr[x];
	}
	return (merge(query(2 * x, st, md, qst, qed), query(2 * x + 1, md + 1, ed, qst, qed)));
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n, q;
	cin >> n >> q;
	for(ll i = 1; i <= n; i++) {
		ll z; cin >> z; wr.push_back(z);
	}
	build(1, 0, n - 1);
	for(ll i = 1; i <= q; i++) {
		ll a, b, c, p = 0;
		cin >> a >> b >> c;
		if(a == 2) {
			vector<ll> x; x.clear();
			x = query(1, 0, n - 1, b - 1, c - 1);
			if(x.size() >= 3) {
				for(ll i = 0; i < x.size() - 2; i++) {
					if(x[i] < x[i + 1] + x[i + 2]) {
						p = x[i] + x[i + 1] + x[i + 2];
						break;
					}
				}
			}
			cout << p << endl;
		} else {
			update(1, 0, n - 1, b - 1, c);
		}
	}
	return 0;
}