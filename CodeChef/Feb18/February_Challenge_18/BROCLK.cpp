#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

class fr {
public:
	ll n, d;
};

void bhushan(ll a, ll b, ll& x, ll& y) {
	if(a % b == 0) {
		x = 0; y = 1;
		return;
	}
	bhushan(b, a % b, x, y); ll temp = x; x = y; y = temp - y * (a / b);
}

ll invs(ll a, ll m) {
	ll x, y; bhushan(a, m, x, y);
	if(x < 0) {
		x += m;
	}
	return x;
}

unordered_map<ll, fr> cse;

void init(ll l, ll d, ll t) {
	cse[1].n = d; cse[1].d = l;
	for(ll i = 2; i <= t; i *= 2) {
		ll ch = i / 2; ll n = cse[ch].n, d = cse[ch].d;
		ll an = (((2 * (n * n) % mod) % mod - (d * d) % mod) + mod) % mod; ll ad = (d * d) % mod;
		cse[i].n = an; cse[i].d = ad; 
	}
}

void bh(fr & obj) {
	ll gc = __gcd(obj.n, obj.d); obj.n /= gc; obj.d /= gc;
}

ll hp(ll t) {
	if(t == 1 || t == 2) {
		return t;
	}
	ll i;
	for(i = 2; i <= t; i *= 2);
	i /= 2;
	return i;
}

fr cos_s(ll t) {
	ll h2 = hp(t);
	if(t - h2 == 0) {
		return cse[t];
	}
	if(cse.find(t) != cse.end()) {
		return cse[t];
	}
	ll a1 = h2, a2 = t- h2;
	fr f1, f2, f3, ans;
	f1 = cse[h2]; f2 = cos_s(t - h2); f3 = cos_s(2 * h2 - t);
	ll n1 = (((f1.n * f2.n) % mod * 2) % mod + mod) % mod; ll d1 = ((f1.d * f2.d) % mod + mod) % mod;
	ans.n = (((n1 * f3.d) % mod - (f3.n * d1) % mod) % mod + mod) % mod; ans.d = ((d1 * f3.d) % mod + mod) % mod; cse[t] = ans;
	return ans;
}	

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while(t--) {
		cse.clear();
		ll l, d, t, p = 0;
		cin >> l >> d >> t;
		init(l, d, t);
		fr an = cos_s(t); an.n = l * an.n; bh(an);
		ll inv = invs(an.d, mod); ll ans = ((an.n % mod) * (inv % mod)) % mod;
		ans = (ans + mod) % mod; cout << ans << endl;
	}
	return 0;
}