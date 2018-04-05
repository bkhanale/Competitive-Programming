#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100005

struct update {
	ll idx, nval, pval;
};
struct query {
	ll idx, lft, rgt, upds, g;
};

bool prime[MAX];
ll primenos[MAX];
vector<ll> bhu[MAX];
vector<update> upd;
vector<query> qry;
ll blk, cnt;
ll bhucnt[MAX];
ll a[MAX], aa[MAX], ans[MAX];

bool comp(const query & f, const query &s) {
	ll lin = f.lft / blk, loi = s.lft / blk;
	if(lin != loi) {
		return lin < loi;
	} else {
		ll rin = f.rgt / blk, roi = s.lft / blk;
		if(rin != roi) {
			return rin < roi;
		}
		return f.upds < s.upds;
	}
}

void build() {
	for(ll i = 2; i < MAX; i++) {
		if(prime[i]) {
			for(ll j = i; j < MAX; j += i) {
				prime[j] = false;
			}
			prime[i] = true;
		}
	}
	for(ll i = 2; i < MAX; i++) {
		if(prime[i]) {
			primenos[cnt] = i;
			cnt++;
		}
	}
	for(ll i = 1; i <= MAX; i++) {
		ll sq = sqrt(i);
		for(ll j = 1; j <= sq; j++) {
			if(i % j == 0) {
				ll p = j, q = i / j; 
				if(p == q) {
					bhu[i].push_back(p);
				} else {
					bhu[i].push_back(p); bhu[i].push_back(q);
				}
			}
		}
	}
}

void do_this(ll s, ll e, ll rgt, ll lft) {
	while(e < rgt) {
		e++; 
		for(ll j = 0; j < bhu[a[e]].size(); j++) {
			bhucnt[bhu[a[e]][j]]++;
		}
	}
	while(e > rgt) { 
		for(ll j = 0; j < bhu[a[e]].size(); j++) {
			bhucnt[bhu[a[e]][j]]--;
		}
		e--;
	}
	while(s < rgt) { 
		for(ll j = 0; j < bhu[a[s]].size(); j++) {
			bhucnt[bhu[a[e]][j]]--;
		}
		s++;
	}
	while(e < rgt) {
		s--; 
		for(ll j = 0; j < bhu[a[s]].size(); j++) {
			bhucnt[bhu[a[s]][j]]++;
		}
	}
}

void do_this_next(ll s, ll e, ll lft, ll rgt, ll g, ll idx) {
	vector<ll> x;
	for(ll j = 0; j < cnt; j++) {
		ll rp = primenos[j];
		if(g < rp || g < 2) break;
		if(g % rp == 0) {
			x.push_back(rp);
			while(g % rp == 0) {
				g /= rp;
			}
		}
	}
	ll cntR = 0, xsz = x.size(), updb = 1 << xsz;
	for(ll j = 1; j < updb; j++) {
		ll cont = 0, prd = 1;
		for(ll k = 0; k < xsz; k++) {
			if(j & (1 << k)) {
				cont++; prd *= x[k];
			}
		}
		if(cnt & 1) {
			cntR += bhucnt[prd];
		} else {
			cntR -= bhucnt[prd];
		}
	}
	ans[idx] = rgt - lft + 1 - cntR;
}

int main() {
	build();
	ll n; ll xx, yy; ll L, R, G, t; ll ch, index, nval; 
	cin >> n;
	ll a[n];
	blk = (ll)pow(n, 0.73);
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		aa[i] = a[i];
	}
	ll q;
	cin >> q;
    for(int i=0;i<q;i++) {
        scanf("%d",&t);
        if(t == 1) {
            scanf("%d %d",&index,&nval);
            index--;
            upd.push_back(update{index,nval,aa[index]});
            aa[index] = nval;
        } else {
            scanf("%d %d %d",&L,&R,&G);
            L--; R--;
            qry.push_back(query{qry.size(),L,R,upd.size(),G});
        }
    }
	sort(qry.begin(), qry.end(), comp); ll s = 0, e = -1, upds = 0, sz = qry.size();
	for(ll i = 0; i < sz; i++) {
		query qq = qry[i]; ll lft = qq.lft, rgt = qq.rgt, qupds = qq.upds, idx = qq.idx, g = qq.g;
		while(upds < qupds) {
			update U = upd[upds];
			if(U.idx >= s && U.idx <= e) {
				for(ll j = 0; j < bhu[a[U.idx]].size(); j++) {
					bhucnt[bhu[a[U.idx]][j]]--;
				}
			}
			a[U.idx] = U.nval;
			if(U.idx >= s && U.idx <= e) {
				for(ll j = 0; j < bhu[a[U.idx]].size(); j++) {
					bhucnt[bhu[a[U.idx]][j]]++; 
				}
			}
			upds++;
		}
		while(upds > qupds) {
			upds--; update U = upd[upds];
			if(U.idx >= s && U.idx <= e) {
				for(ll j = 0; j < bhu[a[U.idx]].size(); j++) {
					bhucnt[bhu[a[U.idx]][j]]--;
				}
			}
		}
		do_this(s, e, rgt, lft);
		do_this_next(s, e, lft, rgt, g, idx);
	}
	for(ll i = 0; i < sz; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}